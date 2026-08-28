#!/usr/bin/env bash
set -e

BASE="referencias-externas/fontes"
mkdir -p "$BASE"

clone_if_missing () {
  URL="$1"
  DIR="$2"
  if [ -d "$BASE/$DIR/.git" ]; then
    echo "[OK] $DIR já existe; atualizando..."
    git -C "$BASE/$DIR" pull --ff-only || true
  else
    echo "[CLONE] $DIR"
    git clone "$URL" "$BASE/$DIR"
  fi
}

clone_if_missing "https://github.com/kinhosz/Algorithms.git" "kinhosz-Algorithms"
clone_if_missing "https://github.com/LiedsonLB/cpp-studies.git" "LiedsonLB-cpp-studies"
clone_if_missing "https://github.com/joao-acw/progcomp.git" "joao-acw-progcomp"
clone_if_missing "https://github.com/BrunoBReis/programacao-competitiva.git" "BrunoBReis-programacao-competitiva"
clone_if_missing "https://github.com/Matunag/Questoes-cpp.git" "Matunag-Questoes-cpp"

echo
echo "Pronto. As fontes estão em: $BASE"
echo "Para a estrutura de dados do Algorithms, consulte:"
echo "$BASE/kinhosz-Algorithms/Data structures"

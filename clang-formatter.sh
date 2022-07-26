# Run clang-format on all files
# Run this from the root dir
find . -type f -regex '.*\.\(cpp\|hpp\|cu\|c\|cc\|h\)' -not \( -path '*/venv/*' -o -path '*/build/*' -o -path '*/cmake-build-debug/*' \) | xargs clang-format --style=file -i


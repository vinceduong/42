DIR="./test/bin"

# Check if the directory exists
if [[ ! -d "$DIR" ]]; then
    echo "Error: Directory '$DIR' does not exist."
    exit 1
fi

# Loop over each file in the directory
for file in "$DIR"/*; do
    # Check if it's a regular file and is executable
    if [[ -f "$file" && -x "$file" ]]; then
        "$file"
    fi
done

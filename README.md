# 🔄 Push_swap

A number sorting project using two stacks and a limited set of operations.

## 🎯 Overview

Push_swap is an algorithm project that sorts numbers using two stacks and specific operations. The goal is to sort with the minimum number of operations.

## 🔍 Operations

- `sa` - Swap first two elements of stack A
- `sb` - Swap first two elements of stack B
- `ss` - sa and sb simultaneously
- `pa` - Push top element from stack B to stack A
- `pb` - Push top element from stack A to stack B
- `ra` - Rotate stack A up
- `rb` - Rotate stack B up
- `rr` - ra and rb simultaneously
- `rra` - Rotate stack A down
- `rrb` - Rotate stack B down
- `rrr` - rra and rrb simultaneously

## 📊 Algorithm Performance

| Input Size | Max Operations |
|------------|---------------|
| 3 numbers  | ≤ 3          |
| 5 numbers  | ≤ 12         |
| 100 numbers| ≤ 700        |
| 500 numbers| ≤ 5500       |

## 🚀 Usage

```bash
# Compile
make

# Run with numbers
./push_swap 2 1 3 6 5 8
```

## 💡 Algorithm Strategy

1. **Input Analysis**
   - Detect already sorted sequences
   - Find optimal pivot points

2. **Sorting Process**
   - Small sets (≤3): Direct algorithm
   - Medium sets (≤5): Simplified approach
   - Large sets: Optimized quicksort

## ⚙️ Installation

```bash
git clone https://github.com/fsantos23/push_swap.git
cd push_swap
make
```

## ⭐ Show your support

Give a ⭐️ if this project helped you!

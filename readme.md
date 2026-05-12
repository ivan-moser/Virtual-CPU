# Program Instructions

| Opcode | Instruction |
|--------|-------------|
| `0x10` | MOVE |
| `0x20` | ADD |
| `0x30` | JUMP |
| `0x40` | HALT |

---

# Byte Structure (MOVE / ADD)

- First byte → Instruction
- Second byte:
  - High nibble → VM register
  - Low nibble → Value

# JUMP

- First byte → Instruction
- Second byte → Adress

---

# Example

```text
MOVE V2, 5
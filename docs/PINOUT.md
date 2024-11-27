# PINOUT BALANCING ROBOT RAVANDS rev.1 (REFERENSI PIN PROGRAMMABLE)

### ESP32 

**No** | **Label**     | **Pin**   | **Deskripsi**                       |
-------|---------------|-----------|-------------------------------------|
   1   | `IMU - SDA`   | GPIO-21   | Address 0x27                        |
   2   | `IMU - SCL`   | GPIO-22   |                                     |
   3   | `Buzzer`      | GPIO-33   | Indikator                           |
   4   | `Led`         | GPI0-32   | Indikator                           |
   5   | `Step-MA`     | GPI0-19   | Motor A                             |
   6   | `Dir-MA`      | GPIO-18   | Motor A                             |
   7   | `Step-MB`     | GPI0-4    | Motor B                             |
   8   | `Dir-MB`      | GPIO-15   | Motor B                             |
   9   | `SERVO-1`     | GPIO-14   | GRIPPER                             |
   10  | `SERVO-2`     | GPIO-13   | ARM                                 |

---

## Tuning Nilai PID (First)

**No** |  **Nilai KP** |  **Nilai KI**  |  **Nilai KD**  |
-------|---------------|----------------|----------------|
   1   |    `0.32`     |       -        |   `0.05`       |
   2   |    `0.30`     |       -        |   `0.08`       |
   3   |    `0.`     |       -        |   `0.`       |
   4   |    `0.`     |       -        |   `0`       |

----

## Tuning Nilai PID (Throttle)

**No** |  **Nilai KP** |  **Nilai KI**  |  **Nilai KD**  |
-------|---------------|----------------|----------------|
   1   |    `0.08`     |     `0.10`     |       -        |
   2   |    `0.`     |     `0.`     |       -        |
   3   |    `0.`     |     `0.`     |       -        |
   4   |    `0.`     |     `0.`     |       -        |
---

## Tuning Nilai PID (Position)

**No** |  **Nilai KP** |  **Nilai KI**  |  **Nilai KD**  |
-------|---------------|----------------|----------------|
   1   |    `0.06`     |       -        |   `0.45`       |
   2   |    `0.`     |       -        |   `0.`       |
   3   |    `0.`     |       -        |   `0.`       |
   4   |    `0.`     |       -        |   `0.`       |

---
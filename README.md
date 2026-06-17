# 🌱 Automatické zavlažování s Arduinem

Tento projekt obsahuje plně funkční kód a schéma zapojení pro automatický systém zavlažování rostlin na základě vlhkosti půdy. Projekt je vyvíjen v prostředí **PlatformIO**.

---

## 🛠️ Hardwarové komponenty

Pro stavbu tohoto projektu budete potřebovat:
* **Arduino** (Uno / Nano / Pro Mini)
* **Senzor vlhkosti půdy** (např. odporový nebo kapacitní)
* **5V relé modul** (pro spínání čerpadla)
* **5V vodní čerpadlo** (ponorné)
* **Napájecí zdroj** (např. 5V USB adaptér nebo powerbanka)
* Spojovací vodiče a hadičku k čerpadlu

---

## 🔌 Schéma zapojení


| Komponenta | Pin na Arduinu | Popis |
| :--- | :--- | :--- |
| **Senzor vlhkosti (VCC)** | 5V | Napájení senzoru |
| **Senzor vlhkosti (GND)** | GND | Zemnění |
| **Senzor vlhkosti (AO)** | A0 | Analogový výstup (čtení vlhkosti) |
| **Relé modul (VCC)** | 5V | Napájení relé |
| **Relé modul (GND)** | GND | Zemnění |
| **Relé modul (IN)** | D2 | Digitální pin pro spínání |

*Poznámka: Čerpadlo je zapojeno přes spínací kontakty relé (NO - Normally Open) k externímu 5V napájení.*

---

## 💻 Vývojové prostředí a instalace

Kód byl napsán v **PlatformIO** (rozšíření pro VS Code).

### Jak projekt spustit:
1. Stáhněte si a nainstalujte [VS Code](https://code.visualstudio.com/) a rozšíření [PlatformIO](https://platformio.org/).
2. Naklonujte tento repozitář nebo si ho stáhněte jako ZIP:
   ```bash
   git clone [https://github.com/TVOJE-JMENO/NAZEV-REPOZITARE.git](https://github.com/TVOJE-JMENO/NAZEV-REPOZITARE.git)

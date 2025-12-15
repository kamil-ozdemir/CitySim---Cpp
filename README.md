# UrbanFlow-Engine 🚦

**UrbanFlow-Engine**, C++ ile geliştirilmiş, Nesne Yönelimli Programlama (OOP) prensiplerini temel alan modüler bir akıllı şehir ve trafik simülasyonu çekirdeğidir.

Bu proje, bir şehrin trafik dinamiklerini simüle etmek amacıyla farklı araç tiplerini, motor bileşenlerini ve GPS konumlandırma sistemlerini modellemektedir.

## 🚀 Proje Hakkında

Bu proje, **Bilgisayar Mühendisliği** müfredatındaki ileri seviye OOP konseptlerini pratik bir senaryo üzerinde uygulamak için geliştirilmektedir. "Spagetti kod" yerine, gerçek dünyadaki gibi parçalı ve yönetilebilir bir mimari (System Design) hedeflenmiştir.

### 🛠 Kullanılan Teknolojiler ve Konseptler
- **Dil:** C++ (C++11/14/17 Standartları)
- **Modüler Yapı:** Header (`.h`) ve Source (`.cpp`) dosya ayrımı
- **Composition (Bileşim):** `Engine` ve `GPS` nesnelerinin `Vehicle` içinde kullanılması
- **Static Members:** Sınıf bazında veri takibi (Örn: Trafikteki toplam araç sayısı)
- **Encapsulation (Kapsülleme):** Veri güvenliği ve erişim kontrolleri (`const` correctness)
- **STL (Standard Template Library):** `std::pair`, `std::string` kullanımları

---

## 📂 Dosya Yapısı

Proje, "Separation of Concerns" (İlgi alanlarının ayrımı) prensibine göre modüllere ayrılmıştır:

| Dosya | Açıklama |
|-------|----------|
| `main.cpp` | Simülasyonun giriş noktası ve test senaryoları. |
| `Vehicle.h/cpp` | Ana araç sınıfı. Motor ve GPS'i birleştirir, araç sayısını takip eder. |
| `Engine.h/cpp` | Motor özelliklerini (Beygir gücü, Yakıt tipi, Çalışma durumu) yönetir. |
| `GPS.h/cpp` | Koordinat sistemini yönetir. `std::pair` ile konum verisi döndürür. |

---

## ⚙️ Kurulum ve Derleme (Build)

Bu proje harici bir kütüphane gerektirmez. Standart bir C++ derleyicisi (GCC, Clang, MSVC) yeterlidir.

### VS Code / Terminal Üzerinden Derleme
Proje birden fazla dosya içerdiği için tüm `.cpp` dosyalarını derleyiciye göstermeniz gerekir:

```bash
g++ main.cpp Vehicle.cpp Engine.cpp GPS.cpp -o UrbanFlow

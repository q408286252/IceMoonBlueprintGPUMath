# IceMoon Blueprint GPU Math (IMBGM)

**A High-Performance C++ Blueprint Node Library for Technical Artists (TAs) and Graphics Programmers in Unreal Engine.**

---

## 🚀 Core Value: Bridging Shader Semantics & Boosting Performance

This library addresses the cognitive load and performance inconsistency faced by Technical Artists and graphics developers when switching between **Niagara**, **Blueprint**, **Material (HLSL)**, and **C++** environments.

The core goal is to **unify common GPU mathematical keywords and functions** across all environments, providing a consistent C++ layer with minimal overhead. All nodes use the **`IM_`** prefix to prevent conflicts.

### 💡 Design Philosophy: HLSL Semantic Consistency

We prioritize aligning Blueprint nodes with HLSL/GPU programming conventions, reducing the need for verbose engine functions:

| HLSL/GLSL Keyword | Blueprint DisplayName | Technical Advantage |
| :--- | :--- | :--- |
| `saturate(x)` | `Saturate (GPU)` | **Semantic Parity:** Directly mirrors GPU function semantics, avoiding the verbose `FMath::Clamp(x, 0.f, 1.f)` and improving clarity for graphics developers. |

All functions are organized under the **`IM | GPU | Math`** and **`IM | GPU | Rotation`** categories in the Blueprint palette. The library is iteratively updated based on the author's production needs, ensuring high practical utility.

## 🛠️ Installation

1. Clone or download this repository into your Unreal Engine project's **`Plugins`** folder.
2. Ensure the plugin is enabled in your **`.uproject`** file.
3. Regenerate Visual Studio project files and compile the engine/project.

## ⚠️ Performance and Maintenance Policy

This plugin serves as the author's personal portfolio and production tool. Please note the following constraints before use:

### ⚡ Performance Advisory

All **`IM | GPU`** nodes are written in C++. **However, frequent invocation of any Blueprint node (e.g., within an `Event Tick`) still incurs Blueprint interpreter overhead.** For maximum performance, prioritize placing high-frequency mathematical calculations in **Material or C++ code**.

### 📜 Licensing and Contribution

* **License:** This library is provided free under the **BSD 3-Clause License**.
* **Maintenance:** **This project does not accept feature requests (Feature Requests) or functional enhancement Issues.** The Issues section is strictly for reporting engine compatibility problems or critical bugs and will otherwise be automatically closed.
* Contributors submitting PRs will be credited in the `Credits.md` file.
* If you use this plugin in a commercial project, mentioning "IceMoon" in your game's credits is greatly appreciated.

---

<br>

#### **中文版本 (放在英文版之后)**

# IceMoon Blueprint GPU Math (IMBGM)

**一个为技术美术 (TA) 和图形程序员打造的高性能 C++ 蓝图节点库。**

---

## 🚀 核心价值：抹平着色器语义差异与性能提升

本库致力于解决技术美术 (TA) 和图形开发者在 **Niagara**、**蓝图 (Blueprint)**、**材质 (Material/HLSL)** 和 **C++** 之间切换时，因函数命名和性能不一致导致的心智负担。

核心是**统一各环境下的 GPU 数学关键字语义**，提供一套高效的 C++ 蓝图接口。所有节点均使用 **`IM_`** 前缀，以确保不与引擎或第三方插件产生冲突。

### 💡 设计理念：HLSL 语义一致性优先

| HLSL/GLSL 关键字 | 蓝图节点 (DisplayName) | 技术优势 |
| :--- | :--- | :--- |
| `saturate(x)` | `Saturate (GPU)` | **语义统一：** 避免使用冗长的 `FMath::Clamp(x, 0.f, 1.f)`，与 GPU 编程中的语义完全一致，提高代码可读性。 |

所有函数都可在蓝图的 **`IM | GPU | Math`** 和 **`IM | GPU | Rotation`** 分类中找到。该库的内容会根据作者的实际项目需求进行迭代更新，以确保所有函数都具有高实用性。

## 🛠️ 安装

1.  将此仓库克隆或下载到您的 Unreal Engine 项目的 **`Plugins`** 文件夹中。
2.  在 **`.uproject`** 文件中确保插件被启用。
3.  重新生成 Visual Studio 项目文件并编译。

## ⚠️ 性能与维护政策

本插件旨在作为作者的个人作品集和工作流工具。请在使用前理解以下限制：

### ⚡ 性能忠告

所有 **`IM | GPU`** 节点都使用 C++ 编写。**但任何蓝图节点的频繁调用（例如在 `Event Tick` 中）都会产生蓝图解释器的开销。** 请优先将高频数学计算置于 **材质或 C++ 代码** 中，以获得最高性能。

### 📜 许可证与贡献

* **许可证：** 本库使用 **BSD 3-Clause 许可** 免费提供。
* **维护：** **本项目不接受任何功能请求 (Feature Requests) 或功能增强的 Issues**，相关 Issues 将被自动关闭。Issues 区严格用于报告引擎兼容性问题或关键 Bug。
* 提交 PR 的贡献者，其名字将被加入插件的 `Credits.md` 文件中，以示感谢。
* 如果您在商业项目中使用本插件，我非常感谢您能在游戏致谢名单中提及 IceMoon 贡献。

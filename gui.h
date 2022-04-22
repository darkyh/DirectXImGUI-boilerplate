#pragma once

#include <d3d9.h>

namespace gui{
    constexpr int WIDTH = 500;
    constexpr int HEIGHT = 350;

    bool exit = true;
    HWND window = nullptr;
    WNDCLASSEXA  windowClass = {};

    POINTS position = {};

    PDIRECT3D9 d3d = nullptr;
    LPDIRECT3DDEVICE9 device = nullptr;
    D3DPRESENT_PARAMETERS presentParameters= {};

    void CreateHWindow(
        const char* windowName,
        const char* className
    ) noexcept;
    void DestroyHWindow() noexcept;

    void ResetDevice() noexcept;
    bool CreateDevice() noexcept;
    void DestroyDevice() noexcept;

    void CreateImGui() noexcept;
    void DestroyImGui() noexcept;

    void BeginRender() noexcept;
    void EndRender() noexcept;
    void Render() noexcept;
}

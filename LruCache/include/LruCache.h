﻿//-------------------------------------------------------------------------------------------------
// File : LruCache.h
// Desc : Least Recently Used Cache Module.
// Copyright(c) Project Asura. All right reserved.
//-------------------------------------------------------------------------------------------------
#pragma once

//-------------------------------------------------------------------------------------------------
// Includes
//-------------------------------------------------------------------------------------------------
#include <list>
#include <algorithm>


///////////////////////////////////////////////////////////////////////////////////////////////////
// LruCache class
///////////////////////////////////////////////////////////////////////////////////////////////////
template<typename T>
class LruCache
{
    //=============================================================================================
    // list of friend classes and methods.
    //=============================================================================================
    /* NOTHING */

public:
    //=============================================================================================
    // public variables.
    //=============================================================================================
    /* NOTHING */

    //=============================================================================================
    // public methods.
    //=============================================================================================

    //---------------------------------------------------------------------------------------------
    //! @brief      コンストラクタです.
    //---------------------------------------------------------------------------------------------
    LruCache(size_t capacity);

    //---------------------------------------------------------------------------------------------
    //! @brief      デストラクタです.
    //---------------------------------------------------------------------------------------------
    ~LruCache();

    //---------------------------------------------------------------------------------------------
    //! @brief      要素を追加します.
    //!
    //! @param[in]      item        追加する要素.
    //---------------------------------------------------------------------------------------------
    void Add(const T& item);

    //---------------------------------------------------------------------------------------------
    //! @brief      要素を削除します.
    //!
    //! @param[in]      item        削除する要素.
    //---------------------------------------------------------------------------------------------
    void Remove(const T& item);

    //---------------------------------------------------------------------------------------------
    //! @brief      全要素を削除します.
    //---------------------------------------------------------------------------------------------
    void Clear();

    //---------------------------------------------------------------------------------------------
    //! @brief      要素が含まれているか判定します.
    //!
    //! @return     指定要素が含まれている場合には true を返却します.
    //---------------------------------------------------------------------------------------------
    bool Contains(const T& item) const;

    //---------------------------------------------------------------------------------------------
    //! @brief     配列にコピーします.
    //---------------------------------------------------------------------------------------------
    void Copy(T* pArray, size_t offset) const;

    //---------------------------------------------------------------------------------------------
    //! @brief      最大収容可能数を取得します.
    //!
    //! @return     最大収容可能数を返却します.
    //---------------------------------------------------------------------------------------------
    size_t GetCapacity() const;

    //---------------------------------------------------------------------------------------------
    //! @brief      現在の収容数を取得します.
    //!
    //! @return     現在の収容数を返却します.
    //---------------------------------------------------------------------------------------------
    size_t GetCount() const;

private:
    //=============================================================================================
    // private variables.
    //=============================================================================================
    size_t          m_Capacity;     //!< 最大収容可能数.
    std::list<T>    m_Cache;        //!< キャッシュです.

    //=============================================================================================
    // private methods.
    //=============================================================================================
    /* NOTHING */
};


//-------------------------------------------------------------------------------------------------
// Inline Files.
//-------------------------------------------------------------------------------------------------
#include "LruCache.inl"

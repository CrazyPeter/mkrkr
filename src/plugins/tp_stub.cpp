/*

	TVP2 ( T Visual Presenter 2 )  A script authoring tool
	Copyright (C) 2000-2009 W.Dee <dee@kikyou.info> and contributors

	See details of license at "license.txt"
*/
/* This file is always generated by makestub.pl . */
/* Modification by hand will be lost. */

// #include <windows.h>
#include "win_def.h"
#include "tp_stub.h"

#define TVP_IN_PLUGIN_STUB

tjs_int TVPPluginGlobalRefCount = 0;

//---------------------------------------------------------------------------
// stubs
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
// Stub library setup
//---------------------------------------------------------------------------

static iTVPFunctionExporter * TVPFunctionExporter = NULL;

void * TVPGetImportFuncPtr(const char *name)
{
	void *ptr;
	if(TVPFunctionExporter->QueryFunctionsByNarrowString(&name, &ptr, 1))
	{
		// succeeded
	}
	else
	{
		// failed
		static const char *funcname = "void ::TVPThrowPluginUnboundFunctionError(const char *)";
		if(!TVPFunctionExporter->QueryFunctionsByNarrowString(&funcname, &ptr, 1))
		{
			*(int*)0 = 0; // causes an error
		}
		typedef void (__stdcall * __functype)(const char *);
		((__functype)(ptr))(name);
	}
	return ptr;
}

/* TVPInitImportStub : stub initialization */
bool TVPInitImportStub(iTVPFunctionExporter * exporter)
{
	// set TVPFunctionExporter
	TVPFunctionExporter = exporter;
	return true;
}

/* TVPUninitImportStub : stub uninitialization */
void TVPUninitImportStub()
{
}


//---------------------------------------------------------------------------
// tTJSDispatch
//---------------------------------------------------------------------------
// tTJSDispatch::tTJSDispatch()
// {
// 	BeforeDestructionCalled = false;
// 	RefCount = 1;
// #ifdef TVP_IN_PLUGIN_STUB // TVP plug-in support
// 	TVPPluginGlobalRefCount++;
// #endif
// }
// //---------------------------------------------------------------------------
// tTJSDispatch::~tTJSDispatch()
// {
// 	if(!BeforeDestructionCalled)
// 	{
// 		BeforeDestructionCalled = true;
// 		BeforeDestruction();
// 	}
// }
// //---------------------------------------------------------------------------
// tjs_uint TJS_INTF_METHOD  tTJSDispatch::AddRef(void)
// {
// #ifdef TVP_IN_PLUGIN_STUB // TVP plug-in support
// 	TVPPluginGlobalRefCount++;
// #endif
// 	return ++RefCount;
// }
// //---------------------------------------------------------------------------
// tjs_uint TJS_INTF_METHOD  tTJSDispatch::Release(void)
// {
// #ifdef TVP_IN_PLUGIN_STUB // TVP plug-in support
// 	TVPPluginGlobalRefCount--;
// #endif
// 	if(RefCount == 1) // avoid to call "BeforeDestruction" with RefCount == 0
// 	{
// 		// object destruction
// 		if(!BeforeDestructionCalled)
// 		{
// 			BeforeDestructionCalled = true;
// 			BeforeDestruction();
// 		}

// 		if(RefCount == 1) // really ready to destruct ?
// 		{
// 			delete this;
// 			return 0;
// 		}
// 	}
// 	return --RefCount;
// }
// //---------------------------------------------------------------------------
// tjs_error TJS_INTF_METHOD
// 	tTJSDispatch::FuncCallByNum(
// 		tjs_uint32 flag,
// 		tjs_int num,
// 		tTJSVariant *result,
// 		tjs_int numparams,
// 		tTJSVariant **param,
// 		iTJSDispatch2 *objthis
// 		)
// {
// 	tjs_char buf[34];
// 	TJS_int_to_str(num, buf);
// 	return FuncCall(flag, buf, NULL, result, numparams, param, objthis);
// }
// //---------------------------------------------------------------------------
// tjs_error TJS_INTF_METHOD
// 	tTJSDispatch::PropGetByNum(
// 		tjs_uint32 flag,
// 		tjs_int num,
// 		tTJSVariant *result,
// 		iTJSDispatch2 *objthis
// 		)
// {
// 	tjs_char buf[34];
// 	TJS_int_to_str(num, buf);
// 	return PropGet(flag, buf, NULL, result, objthis);
// }
// //---------------------------------------------------------------------------
// tjs_error TJS_INTF_METHOD
// 	tTJSDispatch::PropSetByNum(
// 		tjs_uint32 flag,
// 		tjs_int num,
// 		const tTJSVariant *param,
// 		iTJSDispatch2 *objthis
// 		)
// {
// 	tjs_char buf[34];
// 	TJS_int_to_str(num, buf);
// 	return PropSet(flag, buf, NULL, param, objthis);
// }
// //---------------------------------------------------------------------------
// tjs_error TJS_INTF_METHOD
// 	tTJSDispatch::GetCountByNum(
// 		tjs_int *result,
// 		tjs_int num,
// 		iTJSDispatch2 *objthis
// 		)
// {
// 	tjs_char buf[34];
// 	TJS_int_to_str(num, buf);
// 	return GetCount(result, buf, NULL, objthis);
// }
// //---------------------------------------------------------------------------
// tjs_error TJS_INTF_METHOD
// 	tTJSDispatch::DeleteMemberByNum(
// 		tjs_uint32 flag,
// 		tjs_int num,
// 		iTJSDispatch2 *objthis
// 		)
// {
// 	tjs_char buf[34];
// 	TJS_int_to_str(num, buf);
// 	return DeleteMember(flag, buf, NULL, objthis);
// }
// //---------------------------------------------------------------------------
// tjs_error TJS_INTF_METHOD
// 	tTJSDispatch::InvalidateByNum(
// 		tjs_uint32 flag,
// 		tjs_int num,
// 		iTJSDispatch2 *objthis
// 		)
// {
// 	tjs_char buf[34];
// 	TJS_int_to_str(num, buf);
// 	return Invalidate(flag, buf, NULL, objthis);
// }
// //---------------------------------------------------------------------------
// tjs_error TJS_INTF_METHOD
// 	tTJSDispatch::IsValidByNum(
// 		tjs_uint32 flag,
// 		tjs_int num,
// 		iTJSDispatch2 *objthis
// 		)
// {
// 	tjs_char buf[34];
// 	TJS_int_to_str(num, buf);
// 	return IsValid(flag, buf, NULL, objthis);
// }
// //---------------------------------------------------------------------------
// tjs_error TJS_INTF_METHOD
// 	tTJSDispatch::CreateNewByNum(
// 		tjs_uint32 flag,
// 		tjs_int num,
// 		iTJSDispatch2 **result,
// 		tjs_int numparams,
// 		tTJSVariant **param,
// 		iTJSDispatch2 *objthis
// 		)
// {
// 	tjs_char buf[34];
// 	TJS_int_to_str(num, buf);
// 	return CreateNew(flag, buf, NULL, result, numparams, param, objthis);
// }
// //---------------------------------------------------------------------------
// tjs_error TJS_INTF_METHOD
// 	tTJSDispatch::IsInstanceOfByNum(
// 		tjs_uint32 flag,
// 		tjs_int num,
// 		const tjs_char *classname,
// 		iTJSDispatch2 *objthis
// 		)
// {
// 	tjs_char buf[34];
// 	TJS_int_to_str(num, buf);
// 	return IsInstanceOf(flag, buf, NULL, classname, objthis);
// }
// //---------------------------------------------------------------------------
// tjs_error TJS_INTF_METHOD
// 	tTJSDispatch::OperationByNum(
// 		tjs_uint32 flag,
// 		tjs_int num,
// 		tTJSVariant *result,
// 		const tTJSVariant *param,
// 		iTJSDispatch2 *objthis
// 		)
// {
// 	tjs_char buf[34];
// 	TJS_int_to_str(num, buf);
// 	return Operation(flag, buf, NULL, result, param, objthis);
// }
// //---------------------------------------------------------------------------
// tjs_error TJS_INTF_METHOD
// 	tTJSDispatch::Operation(
// 		tjs_uint32 flag,
// 		const tjs_char *membername,
// 		tjs_uint32 *hint,
// 		tTJSVariant *result,
// 		const tTJSVariant *param,
// 		iTJSDispatch2 *objthis
// 	)
// {
// 	tjs_uint32 op = flag & TJS_OP_MASK;

// 	if(op!=TJS_OP_INC && op!=TJS_OP_DEC && param == NULL)
// 		return TJS_E_INVALIDPARAM;

// 	if(op<TJS_OP_MIN || op>TJS_OP_MAX)
// 		return TJS_E_INVALIDPARAM;

// 	tTJSVariant tmp;
// 	tjs_error hr;
// 	hr = PropGet(0, membername, hint, &tmp, objthis);
// 	if(TJS_FAILED(hr)) return hr;

// 	TJSDoVariantOperation(op, tmp, param);

// 	hr = PropSet(0, membername, hint, &tmp, objthis);
// 	if(TJS_FAILED(hr)) return hr;

// 	if(result) result->CopyRef(tmp);

// 	return TJS_S_OK;
// }
// //---------------------------------------------------------------------------

//---------------------------------------------------------------------------
// exception protected function stub
//---------------------------------------------------------------------------


static bool TJS_USERENTRY _CatchFuncCall(void *data, const tTVPExceptionDesc & desc)
{
	throw desc;
}
struct t_iTJSDispatch2_AddRef
{
	tjs_uint _ret;
	iTJSDispatch2 * _this;
	t_iTJSDispatch2_AddRef(
			iTJSDispatch2 * _this_
			) :
		_this(_this_)	{;}

};
static void TJS_USERENTRY _Try_iTJSDispatch2_AddRef(void *data)
{
	t_iTJSDispatch2_AddRef * arg = (t_iTJSDispatch2_AddRef *)data;
	arg->_ret = 
	arg->_this->AddRef(
		
		);
}
tjs_uint Try_iTJSDispatch2_AddRef(iTJSDispatch2 * _this)
{
	t_iTJSDispatch2_AddRef arg(
		_this
	);
	TVPDoTryBlock(_Try_iTJSDispatch2_AddRef, _CatchFuncCall, NULL, &arg);
	return arg._ret;
}
struct t_iTJSDispatch2_Release
{
	tjs_uint _ret;
	iTJSDispatch2 * _this;
	t_iTJSDispatch2_Release(
			iTJSDispatch2 * _this_
			) :
		_this(_this_)	{;}

};
static void TJS_USERENTRY _Try_iTJSDispatch2_Release(void *data)
{
	t_iTJSDispatch2_Release * arg = (t_iTJSDispatch2_Release *)data;
	arg->_ret = 
	arg->_this->Release(
		
		);
}
tjs_uint Try_iTJSDispatch2_Release(iTJSDispatch2 * _this)
{
	t_iTJSDispatch2_Release arg(
		_this
	);
	TVPDoTryBlock(_Try_iTJSDispatch2_Release, _CatchFuncCall, NULL, &arg);
	return arg._ret;
}
struct t_iTJSDispatch2_FuncCall
{
	tjs_error _ret;
	iTJSDispatch2 * _this;
	tjs_uint32 flag;
	const tjs_char * membername;
	tjs_uint32 *hint;
	tTJSVariant *result;
	tjs_int numparams;
	tTJSVariant **param;
	iTJSDispatch2 *objthis;
	t_iTJSDispatch2_FuncCall(
			iTJSDispatch2 * _this_,
			tjs_uint32 flag_,
			const tjs_char * membername_,
			tjs_uint32 *hint_,
			tTJSVariant *result_,
			tjs_int numparams_,
			tTJSVariant **param_,
			iTJSDispatch2 *objthis_
			) :
		_this(_this_),
		flag(flag_),
		membername(membername_),
		hint(hint_),
		result(result_),
		numparams(numparams_),
		param(param_),
		objthis(objthis_)	{;}

};
static void TJS_USERENTRY _Try_iTJSDispatch2_FuncCall(void *data)
{
	t_iTJSDispatch2_FuncCall * arg = (t_iTJSDispatch2_FuncCall *)data;
	arg->_ret = 
	arg->_this->FuncCall(
		arg->flag,
		arg->membername,
		arg->hint,
		arg->result,
		arg->numparams,
		arg->param,
		arg->objthis
		);
}
tjs_error Try_iTJSDispatch2_FuncCall(iTJSDispatch2 * _this, tjs_uint32 flag, const tjs_char * membername, tjs_uint32 *hint, tTJSVariant *result, tjs_int numparams, tTJSVariant **param, iTJSDispatch2 *objthis)
{
	t_iTJSDispatch2_FuncCall arg(
		_this,
		flag,
		membername,
		hint,
		result,
		numparams,
		param,
		objthis
	);
	TVPDoTryBlock(_Try_iTJSDispatch2_FuncCall, _CatchFuncCall, NULL, &arg);
	return arg._ret;
}
struct t_iTJSDispatch2_FuncCallByNum
{
	tjs_error _ret;
	iTJSDispatch2 * _this;
	tjs_uint32 flag;
	tjs_int num;
	tTJSVariant *result;
	tjs_int numparams;
	tTJSVariant **param;
	iTJSDispatch2 *objthis;
	t_iTJSDispatch2_FuncCallByNum(
			iTJSDispatch2 * _this_,
			tjs_uint32 flag_,
			tjs_int num_,
			tTJSVariant *result_,
			tjs_int numparams_,
			tTJSVariant **param_,
			iTJSDispatch2 *objthis_
			) :
		_this(_this_),
		flag(flag_),
		num(num_),
		result(result_),
		numparams(numparams_),
		param(param_),
		objthis(objthis_)	{;}

};
static void TJS_USERENTRY _Try_iTJSDispatch2_FuncCallByNum(void *data)
{
	t_iTJSDispatch2_FuncCallByNum * arg = (t_iTJSDispatch2_FuncCallByNum *)data;
	arg->_ret = 
	arg->_this->FuncCallByNum(
		arg->flag,
		arg->num,
		arg->result,
		arg->numparams,
		arg->param,
		arg->objthis
		);
}
tjs_error Try_iTJSDispatch2_FuncCallByNum(iTJSDispatch2 * _this, tjs_uint32 flag, tjs_int num, tTJSVariant *result, tjs_int numparams, tTJSVariant **param, iTJSDispatch2 *objthis)
{
	t_iTJSDispatch2_FuncCallByNum arg(
		_this,
		flag,
		num,
		result,
		numparams,
		param,
		objthis
	);
	TVPDoTryBlock(_Try_iTJSDispatch2_FuncCallByNum, _CatchFuncCall, NULL, &arg);
	return arg._ret;
}
struct t_iTJSDispatch2_PropGet
{
	tjs_error _ret;
	iTJSDispatch2 * _this;
	tjs_uint32 flag;
	const tjs_char * membername;
	tjs_uint32 *hint;
	tTJSVariant *result;
	iTJSDispatch2 *objthis;
	t_iTJSDispatch2_PropGet(
			iTJSDispatch2 * _this_,
			tjs_uint32 flag_,
			const tjs_char * membername_,
			tjs_uint32 *hint_,
			tTJSVariant *result_,
			iTJSDispatch2 *objthis_
			) :
		_this(_this_),
		flag(flag_),
		membername(membername_),
		hint(hint_),
		result(result_),
		objthis(objthis_)	{;}

};
static void TJS_USERENTRY _Try_iTJSDispatch2_PropGet(void *data)
{
	t_iTJSDispatch2_PropGet * arg = (t_iTJSDispatch2_PropGet *)data;
	arg->_ret = 
	arg->_this->PropGet(
		arg->flag,
		arg->membername,
		arg->hint,
		arg->result,
		arg->objthis
		);
}
tjs_error Try_iTJSDispatch2_PropGet(iTJSDispatch2 * _this, tjs_uint32 flag, const tjs_char * membername, tjs_uint32 *hint, tTJSVariant *result, iTJSDispatch2 *objthis)
{
	t_iTJSDispatch2_PropGet arg(
		_this,
		flag,
		membername,
		hint,
		result,
		objthis
	);
	TVPDoTryBlock(_Try_iTJSDispatch2_PropGet, _CatchFuncCall, NULL, &arg);
	return arg._ret;
}
struct t_iTJSDispatch2_PropGetByNum
{
	tjs_error _ret;
	iTJSDispatch2 * _this;
	tjs_uint32 flag;
	tjs_int num;
	tTJSVariant *result;
	iTJSDispatch2 *objthis;
	t_iTJSDispatch2_PropGetByNum(
			iTJSDispatch2 * _this_,
			tjs_uint32 flag_,
			tjs_int num_,
			tTJSVariant *result_,
			iTJSDispatch2 *objthis_
			) :
		_this(_this_),
		flag(flag_),
		num(num_),
		result(result_),
		objthis(objthis_)	{;}

};
static void TJS_USERENTRY _Try_iTJSDispatch2_PropGetByNum(void *data)
{
	t_iTJSDispatch2_PropGetByNum * arg = (t_iTJSDispatch2_PropGetByNum *)data;
	arg->_ret = 
	arg->_this->PropGetByNum(
		arg->flag,
		arg->num,
		arg->result,
		arg->objthis
		);
}
tjs_error Try_iTJSDispatch2_PropGetByNum(iTJSDispatch2 * _this, tjs_uint32 flag, tjs_int num, tTJSVariant *result, iTJSDispatch2 *objthis)
{
	t_iTJSDispatch2_PropGetByNum arg(
		_this,
		flag,
		num,
		result,
		objthis
	);
	TVPDoTryBlock(_Try_iTJSDispatch2_PropGetByNum, _CatchFuncCall, NULL, &arg);
	return arg._ret;
}
struct t_iTJSDispatch2_PropSet
{
	tjs_error _ret;
	iTJSDispatch2 * _this;
	tjs_uint32 flag;
	const tjs_char *membername;
	tjs_uint32 *hint;
	const tTJSVariant *param;
	iTJSDispatch2 *objthis;
	t_iTJSDispatch2_PropSet(
			iTJSDispatch2 * _this_,
			tjs_uint32 flag_,
			const tjs_char *membername_,
			tjs_uint32 *hint_,
			const tTJSVariant *param_,
			iTJSDispatch2 *objthis_
			) :
		_this(_this_),
		flag(flag_),
		membername(membername_),
		hint(hint_),
		param(param_),
		objthis(objthis_)	{;}

};
static void TJS_USERENTRY _Try_iTJSDispatch2_PropSet(void *data)
{
	t_iTJSDispatch2_PropSet * arg = (t_iTJSDispatch2_PropSet *)data;
	arg->_ret = 
	arg->_this->PropSet(
		arg->flag,
		arg->membername,
		arg->hint,
		arg->param,
		arg->objthis
		);
}
tjs_error Try_iTJSDispatch2_PropSet(iTJSDispatch2 * _this, tjs_uint32 flag, const tjs_char *membername, tjs_uint32 *hint, const tTJSVariant *param, iTJSDispatch2 *objthis)
{
	t_iTJSDispatch2_PropSet arg(
		_this,
		flag,
		membername,
		hint,
		param,
		objthis
	);
	TVPDoTryBlock(_Try_iTJSDispatch2_PropSet, _CatchFuncCall, NULL, &arg);
	return arg._ret;
}
struct t_iTJSDispatch2_PropSetByNum
{
	tjs_error _ret;
	iTJSDispatch2 * _this;
	tjs_uint32 flag;
	tjs_int num;
	const tTJSVariant *param;
	iTJSDispatch2 *objthis;
	t_iTJSDispatch2_PropSetByNum(
			iTJSDispatch2 * _this_,
			tjs_uint32 flag_,
			tjs_int num_,
			const tTJSVariant *param_,
			iTJSDispatch2 *objthis_
			) :
		_this(_this_),
		flag(flag_),
		num(num_),
		param(param_),
		objthis(objthis_)	{;}

};
static void TJS_USERENTRY _Try_iTJSDispatch2_PropSetByNum(void *data)
{
	t_iTJSDispatch2_PropSetByNum * arg = (t_iTJSDispatch2_PropSetByNum *)data;
	arg->_ret = 
	arg->_this->PropSetByNum(
		arg->flag,
		arg->num,
		arg->param,
		arg->objthis
		);
}
tjs_error Try_iTJSDispatch2_PropSetByNum(iTJSDispatch2 * _this, tjs_uint32 flag, tjs_int num, const tTJSVariant *param, iTJSDispatch2 *objthis)
{
	t_iTJSDispatch2_PropSetByNum arg(
		_this,
		flag,
		num,
		param,
		objthis
	);
	TVPDoTryBlock(_Try_iTJSDispatch2_PropSetByNum, _CatchFuncCall, NULL, &arg);
	return arg._ret;
}
struct t_iTJSDispatch2_GetCount
{
	tjs_error _ret;
	iTJSDispatch2 * _this;
	tjs_int *result;
	const tjs_char *membername;
	tjs_uint32 *hint;
	iTJSDispatch2 *objthis;
	t_iTJSDispatch2_GetCount(
			iTJSDispatch2 * _this_,
			tjs_int *result_,
			const tjs_char *membername_,
			tjs_uint32 *hint_,
			iTJSDispatch2 *objthis_
			) :
		_this(_this_),
		result(result_),
		membername(membername_),
		hint(hint_),
		objthis(objthis_)	{;}

};
static void TJS_USERENTRY _Try_iTJSDispatch2_GetCount(void *data)
{
	t_iTJSDispatch2_GetCount * arg = (t_iTJSDispatch2_GetCount *)data;
	arg->_ret = 
	arg->_this->GetCount(
		arg->result,
		arg->membername,
		arg->hint,
		arg->objthis
		);
}
tjs_error Try_iTJSDispatch2_GetCount(iTJSDispatch2 * _this, tjs_int *result, const tjs_char *membername, tjs_uint32 *hint, iTJSDispatch2 *objthis)
{
	t_iTJSDispatch2_GetCount arg(
		_this,
		result,
		membername,
		hint,
		objthis
	);
	TVPDoTryBlock(_Try_iTJSDispatch2_GetCount, _CatchFuncCall, NULL, &arg);
	return arg._ret;
}
struct t_iTJSDispatch2_GetCountByNum
{
	tjs_error _ret;
	iTJSDispatch2 * _this;
	tjs_int *result;
	tjs_int num;
	iTJSDispatch2 *objthis;
	t_iTJSDispatch2_GetCountByNum(
			iTJSDispatch2 * _this_,
			tjs_int *result_,
			tjs_int num_,
			iTJSDispatch2 *objthis_
			) :
		_this(_this_),
		result(result_),
		num(num_),
		objthis(objthis_)	{;}

};
static void TJS_USERENTRY _Try_iTJSDispatch2_GetCountByNum(void *data)
{
	t_iTJSDispatch2_GetCountByNum * arg = (t_iTJSDispatch2_GetCountByNum *)data;
	arg->_ret = 
	arg->_this->GetCountByNum(
		arg->result,
		arg->num,
		arg->objthis
		);
}
tjs_error Try_iTJSDispatch2_GetCountByNum(iTJSDispatch2 * _this, tjs_int *result, tjs_int num, iTJSDispatch2 *objthis)
{
	t_iTJSDispatch2_GetCountByNum arg(
		_this,
		result,
		num,
		objthis
	);
	TVPDoTryBlock(_Try_iTJSDispatch2_GetCountByNum, _CatchFuncCall, NULL, &arg);
	return arg._ret;
}
struct t_iTJSDispatch2_PropSetByVS
{
	tjs_error _ret;
	iTJSDispatch2 * _this;
	tjs_uint32 flag;
	tTJSVariantString *membername;
	const tTJSVariant *param;
	iTJSDispatch2 *objthis;
	t_iTJSDispatch2_PropSetByVS(
			iTJSDispatch2 * _this_,
			tjs_uint32 flag_,
			tTJSVariantString *membername_,
			const tTJSVariant *param_,
			iTJSDispatch2 *objthis_
			) :
		_this(_this_),
		flag(flag_),
		membername(membername_),
		param(param_),
		objthis(objthis_)	{;}

};
static void TJS_USERENTRY _Try_iTJSDispatch2_PropSetByVS(void *data)
{
	t_iTJSDispatch2_PropSetByVS * arg = (t_iTJSDispatch2_PropSetByVS *)data;
	arg->_ret = 
	arg->_this->PropSetByVS(
		arg->flag,
		arg->membername,
		arg->param,
		arg->objthis
		);
}
tjs_error Try_iTJSDispatch2_PropSetByVS(iTJSDispatch2 * _this, tjs_uint32 flag, tTJSVariantString *membername, const tTJSVariant *param, iTJSDispatch2 *objthis)
{
	t_iTJSDispatch2_PropSetByVS arg(
		_this,
		flag,
		membername,
		param,
		objthis
	);
	TVPDoTryBlock(_Try_iTJSDispatch2_PropSetByVS, _CatchFuncCall, NULL, &arg);
	return arg._ret;
}
struct t_iTJSDispatch2_EnumMembers
{
	tjs_error _ret;
	iTJSDispatch2 * _this;
	tjs_uint32 flag;
	tTJSVariantClosure *callback;
	iTJSDispatch2 *objthis;
	t_iTJSDispatch2_EnumMembers(
			iTJSDispatch2 * _this_,
			tjs_uint32 flag_,
			tTJSVariantClosure *callback_,
			iTJSDispatch2 *objthis_
			) :
		_this(_this_),
		flag(flag_),
		callback(callback_),
		objthis(objthis_)	{;}

};
static void TJS_USERENTRY _Try_iTJSDispatch2_EnumMembers(void *data)
{
	t_iTJSDispatch2_EnumMembers * arg = (t_iTJSDispatch2_EnumMembers *)data;
	arg->_ret = 
	arg->_this->EnumMembers(
		arg->flag,
		arg->callback,
		arg->objthis
		);
}
tjs_error Try_iTJSDispatch2_EnumMembers(iTJSDispatch2 * _this, tjs_uint32 flag, tTJSVariantClosure *callback, iTJSDispatch2 *objthis)
{
	t_iTJSDispatch2_EnumMembers arg(
		_this,
		flag,
		callback,
		objthis
	);
	TVPDoTryBlock(_Try_iTJSDispatch2_EnumMembers, _CatchFuncCall, NULL, &arg);
	return arg._ret;
}
struct t_iTJSDispatch2_DeleteMember
{
	tjs_error _ret;
	iTJSDispatch2 * _this;
	tjs_uint32 flag;
	const tjs_char *membername;
	tjs_uint32 *hint;
	iTJSDispatch2 *objthis;
	t_iTJSDispatch2_DeleteMember(
			iTJSDispatch2 * _this_,
			tjs_uint32 flag_,
			const tjs_char *membername_,
			tjs_uint32 *hint_,
			iTJSDispatch2 *objthis_
			) :
		_this(_this_),
		flag(flag_),
		membername(membername_),
		hint(hint_),
		objthis(objthis_)	{;}

};
static void TJS_USERENTRY _Try_iTJSDispatch2_DeleteMember(void *data)
{
	t_iTJSDispatch2_DeleteMember * arg = (t_iTJSDispatch2_DeleteMember *)data;
	arg->_ret = 
	arg->_this->DeleteMember(
		arg->flag,
		arg->membername,
		arg->hint,
		arg->objthis
		);
}
tjs_error Try_iTJSDispatch2_DeleteMember(iTJSDispatch2 * _this, tjs_uint32 flag, const tjs_char *membername, tjs_uint32 *hint, iTJSDispatch2 *objthis)
{
	t_iTJSDispatch2_DeleteMember arg(
		_this,
		flag,
		membername,
		hint,
		objthis
	);
	TVPDoTryBlock(_Try_iTJSDispatch2_DeleteMember, _CatchFuncCall, NULL, &arg);
	return arg._ret;
}
struct t_iTJSDispatch2_DeleteMemberByNum
{
	tjs_error _ret;
	iTJSDispatch2 * _this;
	tjs_uint32 flag;
	tjs_int num;
	iTJSDispatch2 *objthis;
	t_iTJSDispatch2_DeleteMemberByNum(
			iTJSDispatch2 * _this_,
			tjs_uint32 flag_,
			tjs_int num_,
			iTJSDispatch2 *objthis_
			) :
		_this(_this_),
		flag(flag_),
		num(num_),
		objthis(objthis_)	{;}

};
static void TJS_USERENTRY _Try_iTJSDispatch2_DeleteMemberByNum(void *data)
{
	t_iTJSDispatch2_DeleteMemberByNum * arg = (t_iTJSDispatch2_DeleteMemberByNum *)data;
	arg->_ret = 
	arg->_this->DeleteMemberByNum(
		arg->flag,
		arg->num,
		arg->objthis
		);
}
tjs_error Try_iTJSDispatch2_DeleteMemberByNum(iTJSDispatch2 * _this, tjs_uint32 flag, tjs_int num, iTJSDispatch2 *objthis)
{
	t_iTJSDispatch2_DeleteMemberByNum arg(
		_this,
		flag,
		num,
		objthis
	);
	TVPDoTryBlock(_Try_iTJSDispatch2_DeleteMemberByNum, _CatchFuncCall, NULL, &arg);
	return arg._ret;
}
struct t_iTJSDispatch2_Invalidate
{
	tjs_error _ret;
	iTJSDispatch2 * _this;
	tjs_uint32 flag;
	const tjs_char *membername;
	tjs_uint32 *hint;
	iTJSDispatch2 *objthis;
	t_iTJSDispatch2_Invalidate(
			iTJSDispatch2 * _this_,
			tjs_uint32 flag_,
			const tjs_char *membername_,
			tjs_uint32 *hint_,
			iTJSDispatch2 *objthis_
			) :
		_this(_this_),
		flag(flag_),
		membername(membername_),
		hint(hint_),
		objthis(objthis_)	{;}

};
static void TJS_USERENTRY _Try_iTJSDispatch2_Invalidate(void *data)
{
	t_iTJSDispatch2_Invalidate * arg = (t_iTJSDispatch2_Invalidate *)data;
	arg->_ret = 
	arg->_this->Invalidate(
		arg->flag,
		arg->membername,
		arg->hint,
		arg->objthis
		);
}
tjs_error Try_iTJSDispatch2_Invalidate(iTJSDispatch2 * _this, tjs_uint32 flag, const tjs_char *membername, tjs_uint32 *hint, iTJSDispatch2 *objthis)
{
	t_iTJSDispatch2_Invalidate arg(
		_this,
		flag,
		membername,
		hint,
		objthis
	);
	TVPDoTryBlock(_Try_iTJSDispatch2_Invalidate, _CatchFuncCall, NULL, &arg);
	return arg._ret;
}
struct t_iTJSDispatch2_InvalidateByNum
{
	tjs_error _ret;
	iTJSDispatch2 * _this;
	tjs_uint32 flag;
	tjs_int num;
	iTJSDispatch2 *objthis;
	t_iTJSDispatch2_InvalidateByNum(
			iTJSDispatch2 * _this_,
			tjs_uint32 flag_,
			tjs_int num_,
			iTJSDispatch2 *objthis_
			) :
		_this(_this_),
		flag(flag_),
		num(num_),
		objthis(objthis_)	{;}

};
static void TJS_USERENTRY _Try_iTJSDispatch2_InvalidateByNum(void *data)
{
	t_iTJSDispatch2_InvalidateByNum * arg = (t_iTJSDispatch2_InvalidateByNum *)data;
	arg->_ret = 
	arg->_this->InvalidateByNum(
		arg->flag,
		arg->num,
		arg->objthis
		);
}
tjs_error Try_iTJSDispatch2_InvalidateByNum(iTJSDispatch2 * _this, tjs_uint32 flag, tjs_int num, iTJSDispatch2 *objthis)
{
	t_iTJSDispatch2_InvalidateByNum arg(
		_this,
		flag,
		num,
		objthis
	);
	TVPDoTryBlock(_Try_iTJSDispatch2_InvalidateByNum, _CatchFuncCall, NULL, &arg);
	return arg._ret;
}
struct t_iTJSDispatch2_IsValid
{
	tjs_error _ret;
	iTJSDispatch2 * _this;
	tjs_uint32 flag;
	const tjs_char *membername;
	tjs_uint32 *hint;
	iTJSDispatch2 *objthis;
	t_iTJSDispatch2_IsValid(
			iTJSDispatch2 * _this_,
			tjs_uint32 flag_,
			const tjs_char *membername_,
			tjs_uint32 *hint_,
			iTJSDispatch2 *objthis_
			) :
		_this(_this_),
		flag(flag_),
		membername(membername_),
		hint(hint_),
		objthis(objthis_)	{;}

};
static void TJS_USERENTRY _Try_iTJSDispatch2_IsValid(void *data)
{
	t_iTJSDispatch2_IsValid * arg = (t_iTJSDispatch2_IsValid *)data;
	arg->_ret = 
	arg->_this->IsValid(
		arg->flag,
		arg->membername,
		arg->hint,
		arg->objthis
		);
}
tjs_error Try_iTJSDispatch2_IsValid(iTJSDispatch2 * _this, tjs_uint32 flag, const tjs_char *membername, tjs_uint32 *hint, iTJSDispatch2 *objthis)
{
	t_iTJSDispatch2_IsValid arg(
		_this,
		flag,
		membername,
		hint,
		objthis
	);
	TVPDoTryBlock(_Try_iTJSDispatch2_IsValid, _CatchFuncCall, NULL, &arg);
	return arg._ret;
}
struct t_iTJSDispatch2_IsValidByNum
{
	tjs_error _ret;
	iTJSDispatch2 * _this;
	tjs_uint32 flag;
	tjs_int num;
	iTJSDispatch2 *objthis;
	t_iTJSDispatch2_IsValidByNum(
			iTJSDispatch2 * _this_,
			tjs_uint32 flag_,
			tjs_int num_,
			iTJSDispatch2 *objthis_
			) :
		_this(_this_),
		flag(flag_),
		num(num_),
		objthis(objthis_)	{;}

};
static void TJS_USERENTRY _Try_iTJSDispatch2_IsValidByNum(void *data)
{
	t_iTJSDispatch2_IsValidByNum * arg = (t_iTJSDispatch2_IsValidByNum *)data;
	arg->_ret = 
	arg->_this->IsValidByNum(
		arg->flag,
		arg->num,
		arg->objthis
		);
}
tjs_error Try_iTJSDispatch2_IsValidByNum(iTJSDispatch2 * _this, tjs_uint32 flag, tjs_int num, iTJSDispatch2 *objthis)
{
	t_iTJSDispatch2_IsValidByNum arg(
		_this,
		flag,
		num,
		objthis
	);
	TVPDoTryBlock(_Try_iTJSDispatch2_IsValidByNum, _CatchFuncCall, NULL, &arg);
	return arg._ret;
}
struct t_iTJSDispatch2_CreateNew
{
	tjs_error _ret;
	iTJSDispatch2 * _this;
	tjs_uint32 flag;
	const tjs_char * membername;
	tjs_uint32 *hint;
	iTJSDispatch2 **result;
	tjs_int numparams;
	tTJSVariant **param;
	iTJSDispatch2 *objthis;
	t_iTJSDispatch2_CreateNew(
			iTJSDispatch2 * _this_,
			tjs_uint32 flag_,
			const tjs_char * membername_,
			tjs_uint32 *hint_,
			iTJSDispatch2 **result_,
			tjs_int numparams_,
			tTJSVariant **param_,
			iTJSDispatch2 *objthis_
			) :
		_this(_this_),
		flag(flag_),
		membername(membername_),
		hint(hint_),
		result(result_),
		numparams(numparams_),
		param(param_),
		objthis(objthis_)	{;}

};
static void TJS_USERENTRY _Try_iTJSDispatch2_CreateNew(void *data)
{
	t_iTJSDispatch2_CreateNew * arg = (t_iTJSDispatch2_CreateNew *)data;
	arg->_ret = 
	arg->_this->CreateNew(
		arg->flag,
		arg->membername,
		arg->hint,
		arg->result,
		arg->numparams,
		arg->param,
		arg->objthis
		);
}
tjs_error Try_iTJSDispatch2_CreateNew(iTJSDispatch2 * _this, tjs_uint32 flag, const tjs_char * membername, tjs_uint32 *hint, iTJSDispatch2 **result, tjs_int numparams, tTJSVariant **param, iTJSDispatch2 *objthis)
{
	t_iTJSDispatch2_CreateNew arg(
		_this,
		flag,
		membername,
		hint,
		result,
		numparams,
		param,
		objthis
	);
	TVPDoTryBlock(_Try_iTJSDispatch2_CreateNew, _CatchFuncCall, NULL, &arg);
	return arg._ret;
}
struct t_iTJSDispatch2_CreateNewByNum
{
	tjs_error _ret;
	iTJSDispatch2 * _this;
	tjs_uint32 flag;
	tjs_int num;
	iTJSDispatch2 **result;
	tjs_int numparams;
	tTJSVariant **param;
	iTJSDispatch2 *objthis;
	t_iTJSDispatch2_CreateNewByNum(
			iTJSDispatch2 * _this_,
			tjs_uint32 flag_,
			tjs_int num_,
			iTJSDispatch2 **result_,
			tjs_int numparams_,
			tTJSVariant **param_,
			iTJSDispatch2 *objthis_
			) :
		_this(_this_),
		flag(flag_),
		num(num_),
		result(result_),
		numparams(numparams_),
		param(param_),
		objthis(objthis_)	{;}

};
static void TJS_USERENTRY _Try_iTJSDispatch2_CreateNewByNum(void *data)
{
	t_iTJSDispatch2_CreateNewByNum * arg = (t_iTJSDispatch2_CreateNewByNum *)data;
	arg->_ret = 
	arg->_this->CreateNewByNum(
		arg->flag,
		arg->num,
		arg->result,
		arg->numparams,
		arg->param,
		arg->objthis
		);
}
tjs_error Try_iTJSDispatch2_CreateNewByNum(iTJSDispatch2 * _this, tjs_uint32 flag, tjs_int num, iTJSDispatch2 **result, tjs_int numparams, tTJSVariant **param, iTJSDispatch2 *objthis)
{
	t_iTJSDispatch2_CreateNewByNum arg(
		_this,
		flag,
		num,
		result,
		numparams,
		param,
		objthis
	);
	TVPDoTryBlock(_Try_iTJSDispatch2_CreateNewByNum, _CatchFuncCall, NULL, &arg);
	return arg._ret;
}
struct t_iTJSDispatch2_Reserved1
{
	tjs_error _ret;
	iTJSDispatch2 * _this;
	t_iTJSDispatch2_Reserved1(
			iTJSDispatch2 * _this_
			) :
		_this(_this_)	{;}

};
static void TJS_USERENTRY _Try_iTJSDispatch2_Reserved1(void *data)
{
	t_iTJSDispatch2_Reserved1 * arg = (t_iTJSDispatch2_Reserved1 *)data;
	arg->_ret = 
	arg->_this->Reserved1(
		
		);
}
tjs_error Try_iTJSDispatch2_Reserved1(iTJSDispatch2 * _this)
{
	t_iTJSDispatch2_Reserved1 arg(
		_this
	);
	TVPDoTryBlock(_Try_iTJSDispatch2_Reserved1, _CatchFuncCall, NULL, &arg);
	return arg._ret;
}
struct t_iTJSDispatch2_IsInstanceOf
{
	tjs_error _ret;
	iTJSDispatch2 * _this;
	tjs_uint32 flag;
	const tjs_char *membername;
	tjs_uint32 *hint;
	const tjs_char *classname;
	iTJSDispatch2 *objthis;
	t_iTJSDispatch2_IsInstanceOf(
			iTJSDispatch2 * _this_,
			tjs_uint32 flag_,
			const tjs_char *membername_,
			tjs_uint32 *hint_,
			const tjs_char *classname_,
			iTJSDispatch2 *objthis_
			) :
		_this(_this_),
		flag(flag_),
		membername(membername_),
		hint(hint_),
		classname(classname_),
		objthis(objthis_)	{;}

};
static void TJS_USERENTRY _Try_iTJSDispatch2_IsInstanceOf(void *data)
{
	t_iTJSDispatch2_IsInstanceOf * arg = (t_iTJSDispatch2_IsInstanceOf *)data;
	arg->_ret = 
	arg->_this->IsInstanceOf(
		arg->flag,
		arg->membername,
		arg->hint,
		arg->classname,
		arg->objthis
		);
}
tjs_error Try_iTJSDispatch2_IsInstanceOf(iTJSDispatch2 * _this, tjs_uint32 flag, const tjs_char *membername, tjs_uint32 *hint, const tjs_char *classname, iTJSDispatch2 *objthis)
{
	t_iTJSDispatch2_IsInstanceOf arg(
		_this,
		flag,
		membername,
		hint,
		classname,
		objthis
	);
	TVPDoTryBlock(_Try_iTJSDispatch2_IsInstanceOf, _CatchFuncCall, NULL, &arg);
	return arg._ret;
}
struct t_iTJSDispatch2_IsInstanceOfByNum
{
	tjs_error _ret;
	iTJSDispatch2 * _this;
	tjs_uint32 flag;
	tjs_int num;
	const tjs_char *classname;
	iTJSDispatch2 *objthis;
	t_iTJSDispatch2_IsInstanceOfByNum(
			iTJSDispatch2 * _this_,
			tjs_uint32 flag_,
			tjs_int num_,
			const tjs_char *classname_,
			iTJSDispatch2 *objthis_
			) :
		_this(_this_),
		flag(flag_),
		num(num_),
		classname(classname_),
		objthis(objthis_)	{;}

};
static void TJS_USERENTRY _Try_iTJSDispatch2_IsInstanceOfByNum(void *data)
{
	t_iTJSDispatch2_IsInstanceOfByNum * arg = (t_iTJSDispatch2_IsInstanceOfByNum *)data;
	arg->_ret = 
	arg->_this->IsInstanceOfByNum(
		arg->flag,
		arg->num,
		arg->classname,
		arg->objthis
		);
}
tjs_error Try_iTJSDispatch2_IsInstanceOfByNum(iTJSDispatch2 * _this, tjs_uint32 flag, tjs_int num, const tjs_char *classname, iTJSDispatch2 *objthis)
{
	t_iTJSDispatch2_IsInstanceOfByNum arg(
		_this,
		flag,
		num,
		classname,
		objthis
	);
	TVPDoTryBlock(_Try_iTJSDispatch2_IsInstanceOfByNum, _CatchFuncCall, NULL, &arg);
	return arg._ret;
}
struct t_iTJSDispatch2_Operation
{
	tjs_error _ret;
	iTJSDispatch2 * _this;
	tjs_uint32 flag;
	const tjs_char *membername;
	tjs_uint32 *hint;
	tTJSVariant *result;
	const tTJSVariant *param;
	iTJSDispatch2 *objthis;
	t_iTJSDispatch2_Operation(
			iTJSDispatch2 * _this_,
			tjs_uint32 flag_,
			const tjs_char *membername_,
			tjs_uint32 *hint_,
			tTJSVariant *result_,
			const tTJSVariant *param_,
			iTJSDispatch2 *objthis_
			) :
		_this(_this_),
		flag(flag_),
		membername(membername_),
		hint(hint_),
		result(result_),
		param(param_),
		objthis(objthis_)	{;}

};
static void TJS_USERENTRY _Try_iTJSDispatch2_Operation(void *data)
{
	t_iTJSDispatch2_Operation * arg = (t_iTJSDispatch2_Operation *)data;
	arg->_ret = 
	arg->_this->Operation(
		arg->flag,
		arg->membername,
		arg->hint,
		arg->result,
		arg->param,
		arg->objthis
		);
}
tjs_error Try_iTJSDispatch2_Operation(iTJSDispatch2 * _this, tjs_uint32 flag, const tjs_char *membername, tjs_uint32 *hint, tTJSVariant *result, const tTJSVariant *param, iTJSDispatch2 *objthis)
{
	t_iTJSDispatch2_Operation arg(
		_this,
		flag,
		membername,
		hint,
		result,
		param,
		objthis
	);
	TVPDoTryBlock(_Try_iTJSDispatch2_Operation, _CatchFuncCall, NULL, &arg);
	return arg._ret;
}
struct t_iTJSDispatch2_OperationByNum
{
	tjs_error _ret;
	iTJSDispatch2 * _this;
	tjs_uint32 flag;
	tjs_int num;
	tTJSVariant *result;
	const tTJSVariant *param;
	iTJSDispatch2 *objthis;
	t_iTJSDispatch2_OperationByNum(
			iTJSDispatch2 * _this_,
			tjs_uint32 flag_,
			tjs_int num_,
			tTJSVariant *result_,
			const tTJSVariant *param_,
			iTJSDispatch2 *objthis_
			) :
		_this(_this_),
		flag(flag_),
		num(num_),
		result(result_),
		param(param_),
		objthis(objthis_)	{;}

};
static void TJS_USERENTRY _Try_iTJSDispatch2_OperationByNum(void *data)
{
	t_iTJSDispatch2_OperationByNum * arg = (t_iTJSDispatch2_OperationByNum *)data;
	arg->_ret = 
	arg->_this->OperationByNum(
		arg->flag,
		arg->num,
		arg->result,
		arg->param,
		arg->objthis
		);
}
tjs_error Try_iTJSDispatch2_OperationByNum(iTJSDispatch2 * _this, tjs_uint32 flag, tjs_int num, tTJSVariant *result, const tTJSVariant *param, iTJSDispatch2 *objthis)
{
	t_iTJSDispatch2_OperationByNum arg(
		_this,
		flag,
		num,
		result,
		param,
		objthis
	);
	TVPDoTryBlock(_Try_iTJSDispatch2_OperationByNum, _CatchFuncCall, NULL, &arg);
	return arg._ret;
}
struct t_iTJSDispatch2_NativeInstanceSupport
{
	tjs_error _ret;
	iTJSDispatch2 * _this;
	tjs_uint32 flag;
	tjs_int32 classid;
	iTJSNativeInstance **pointer;
	t_iTJSDispatch2_NativeInstanceSupport(
			iTJSDispatch2 * _this_,
			tjs_uint32 flag_,
			tjs_int32 classid_,
			iTJSNativeInstance **pointer_
			) :
		_this(_this_),
		flag(flag_),
		classid(classid_),
		pointer(pointer_)	{;}

};
static void TJS_USERENTRY _Try_iTJSDispatch2_NativeInstanceSupport(void *data)
{
	t_iTJSDispatch2_NativeInstanceSupport * arg = (t_iTJSDispatch2_NativeInstanceSupport *)data;
	arg->_ret = 
	arg->_this->NativeInstanceSupport(
		arg->flag,
		arg->classid,
		arg->pointer
		);
}
tjs_error Try_iTJSDispatch2_NativeInstanceSupport(iTJSDispatch2 * _this, tjs_uint32 flag, tjs_int32 classid, iTJSNativeInstance **pointer)
{
	t_iTJSDispatch2_NativeInstanceSupport arg(
		_this,
		flag,
		classid,
		pointer
	);
	TVPDoTryBlock(_Try_iTJSDispatch2_NativeInstanceSupport, _CatchFuncCall, NULL, &arg);
	return arg._ret;
}
struct t_iTJSDispatch2_ClassInstanceInfo
{
	tjs_error _ret;
	iTJSDispatch2 * _this;
	tjs_uint32 flag;
	tjs_uint num;
	tTJSVariant *value;
	t_iTJSDispatch2_ClassInstanceInfo(
			iTJSDispatch2 * _this_,
			tjs_uint32 flag_,
			tjs_uint num_,
			tTJSVariant *value_
			) :
		_this(_this_),
		flag(flag_),
		num(num_),
		value(value_)	{;}

};
static void TJS_USERENTRY _Try_iTJSDispatch2_ClassInstanceInfo(void *data)
{
	t_iTJSDispatch2_ClassInstanceInfo * arg = (t_iTJSDispatch2_ClassInstanceInfo *)data;
	arg->_ret = 
	arg->_this->ClassInstanceInfo(
		arg->flag,
		arg->num,
		arg->value
		);
}
tjs_error Try_iTJSDispatch2_ClassInstanceInfo(iTJSDispatch2 * _this, tjs_uint32 flag, tjs_uint num, tTJSVariant *value)
{
	t_iTJSDispatch2_ClassInstanceInfo arg(
		_this,
		flag,
		num,
		value
	);
	TVPDoTryBlock(_Try_iTJSDispatch2_ClassInstanceInfo, _CatchFuncCall, NULL, &arg);
	return arg._ret;
}
struct t_iTJSDispatch2_Reserved2
{
	tjs_error _ret;
	iTJSDispatch2 * _this;
	t_iTJSDispatch2_Reserved2(
			iTJSDispatch2 * _this_
			) :
		_this(_this_)	{;}

};
static void TJS_USERENTRY _Try_iTJSDispatch2_Reserved2(void *data)
{
	t_iTJSDispatch2_Reserved2 * arg = (t_iTJSDispatch2_Reserved2 *)data;
	arg->_ret = 
	arg->_this->Reserved2(
		
		);
}
tjs_error Try_iTJSDispatch2_Reserved2(iTJSDispatch2 * _this)
{
	t_iTJSDispatch2_Reserved2 arg(
		_this
	);
	TVPDoTryBlock(_Try_iTJSDispatch2_Reserved2, _CatchFuncCall, NULL, &arg);
	return arg._ret;
}
struct t_iTJSDispatch2_Reserved3
{
	tjs_error _ret;
	iTJSDispatch2 * _this;
	t_iTJSDispatch2_Reserved3(
			iTJSDispatch2 * _this_
			) :
		_this(_this_)	{;}

};
static void TJS_USERENTRY _Try_iTJSDispatch2_Reserved3(void *data)
{
	t_iTJSDispatch2_Reserved3 * arg = (t_iTJSDispatch2_Reserved3 *)data;
	arg->_ret = 
	arg->_this->Reserved3(
		
		);
}
tjs_error Try_iTJSDispatch2_Reserved3(iTJSDispatch2 * _this)
{
	t_iTJSDispatch2_Reserved3 arg(
		_this
	);
	TVPDoTryBlock(_Try_iTJSDispatch2_Reserved3, _CatchFuncCall, NULL, &arg);
	return arg._ret;
}

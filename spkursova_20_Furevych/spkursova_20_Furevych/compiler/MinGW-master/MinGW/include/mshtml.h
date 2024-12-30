#ifndef _MSHTML_H
#define _MSHTML_H
#if __GNUC__ >=3
#pragma GCC system_header
#endif

#ifdef __cplusplus
extern "C" {
#endif

typedef _COM_interface IHTMLElementCollection *LPHTMLELEMENTCOLLECTION;
typedef _COM_interface IHTMLElement *LPHTMLELEMENT;
typedef _COM_interface IHTMLSelectionObject *LPHTMLSELECTIONOBJECT;
typedef _COM_interface IHTMLFramesCollection *LPHTMLFRAMESCOLLECTION;
typedef _COM_interface IHTMLLocation *LPHTMLLOCATION;
typedef _COM_interface IHTMLWindow2 *LPHTMLWINDOW2;
typedef _COM_interface IHTMLStyleSheetsCollection *LPHTMLSTYLESHEETSCOLLECTION;
typedef _COM_interface IHTMLStyleSheet *LPHTMLSTYLESHEET;
typedef _COM_interface IHTMLStyle *LPHTMLSTYLE;
typedef _COM_interface IHTMLFiltersCollection *LPHTMLFILTERSCOLLECTION;
typedef _COM_interface IHTMLLinkElement *LPHTMLLINKELEMENT;
typedef _COM_interface IHTMLImgElement *LPHTMLIMGELEMENT;
typedef _COM_interface IHTMLImageElementFactory *LPHTMLIMAGEELEMENTFACTORY;
typedef _COM_interface IHTMLEventObj *LPHTMLEVENTOBJ;
typedef _COM_interface IHTMLScreen *LPHTMLSCREEN;
typedef _COM_interface IHTMLOptionElementFactory *LPHTMLOPTIONELEMENTFACTORY;
typedef _COM_interface IOmHistory *LPOMHISTORY;
typedef _COM_interface IOmNavigator *LPOMNAVIGATOR;

EXTERN_C const IID IID_IHTMLLinkElement;
#define INTERFACE IHTMLLinkElement
DECLARE_INTERFACE_(IHTMLLinkElement,IDispatch)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetTypeInfoCount)(THIS_ UINT*) PURE;
	STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,LPTYPEINFO*) PURE;
	STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*) PURE;
	STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*) PURE;

	STDMETHOD(put_href)(THIS_ BSTR) PURE;
	STDMETHOD(get_href)(THIS_ BSTR*) PURE;
	STDMETHOD(put_rel)(THIS_ BSTR) PURE;
	STDMETHOD(get_rel)(THIS_ BSTR*) PURE;
	STDMETHOD(put_rev)(THIS_ BSTR) PURE;
	STDMETHOD(get_rev)(THIS_ BSTR*) PURE;
	STDMETHOD(put_type)(THIS_ BSTR) PURE;
	STDMETHOD(get_type)(THIS_ BSTR*) PURE;
	STDMETHOD(get_readyState)(THIS_ BSTR*) PURE;
	STDMETHOD(put_onreadystatechange)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onreadystatechange)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onload)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onload)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onerror)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onerror)(THIS_ VARIANT*) PURE;
	STDMETHOD(get_styleSheet)(THIS_ LPHTMLSTYLESHEET*) PURE;
	STDMETHOD(put_disabled)(THIS_ VARIANT_BOOL) PURE;
	STDMETHOD(get_disabled)(THIS_ VARIANT_BOOL*) PURE;
	STDMETHOD(put_media)(THIS_ BSTR) PURE;
	STDMETHOD(get_media)(THIS_ BSTR*) PURE;
};
#undef INTERFACE

EXTERN_C const IID IID_IHTMLImgElement;
#define INTERFACE IHTMLImgElement
DECLARE_INTERFACE_(IHTMLImgElement,IDispatch)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetTypeInfoCount)(THIS_ UINT*) PURE;
	STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,LPTYPEINFO*) PURE;
	STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*) PURE;
	STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*) PURE;

	STDMETHOD(put_isMap)(THIS_ VARIANT_BOOL) PURE;
	STDMETHOD(get_isMap)(THIS_ VARIANT_BOOL*) PURE;
	STDMETHOD(put_useMap)(THIS_ BSTR) PURE;
	STDMETHOD(get_useMap)(THIS_ BSTR*) PURE;
	STDMETHOD(get_mimeType)(THIS_ BSTR*) PURE;
	STDMETHOD(get_fileSize)(THIS_ BSTR*) PURE;
	STDMETHOD(get_fileCreatedDate)(THIS_ BSTR*) PURE;
	STDMETHOD(get_fileModifiedDate)(THIS_ BSTR*) PURE;
	STDMETHOD(get_fileUpdatedDate)(THIS_ BSTR*) PURE;
	STDMETHOD(get_protocol)(THIS_ BSTR*) PURE;
	STDMETHOD(get_href)(THIS_ BSTR*) PURE;
	STDMETHOD(get_nameProp)(THIS_ BSTR*) PURE;
	STDMETHOD(put_border)(THIS_ VARIANT) PURE;
	STDMETHOD(get_border)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_vspace)(THIS_ long) PURE;
	STDMETHOD(get_vspace)(THIS_ long*) PURE;
	STDMETHOD(put_hspace)(THIS_ long) PURE;
	STDMETHOD(get_hspace)(THIS_ long*) PURE;
	STDMETHOD(put_alt)(THIS_ BSTR) PURE;
	STDMETHOD(get_alt)(THIS_ BSTR*) PURE;
	STDMETHOD(put_src)(THIS_ BSTR) PURE;
	STDMETHOD(get_src)(THIS_ BSTR*) PURE;
	STDMETHOD(put_lowsrc)(THIS_ BSTR) PURE;
	STDMETHOD(get_lowsrc)(THIS_ BSTR*) PURE;
	STDMETHOD(put_vrml)(THIS_ BSTR) PURE;
	STDMETHOD(get_vrml)(THIS_ BSTR*) PURE;
	STDMETHOD(put_dynsrc)(THIS_ BSTR) PURE;
	STDMETHOD(get_dynsrc)(THIS_ BSTR*) PURE;
	STDMETHOD(get_readyState)(THIS_ BSTR*) PURE;
	STDMETHOD(get_complete)(THIS_ VARIANT_BOOL*) PURE;
	STDMETHOD(put_loop)(THIS_ VARIANT) PURE;
	STDMETHOD(get_loop)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_align)(THIS_ BSTR) PURE;
	STDMETHOD(get_align)(THIS_ BSTR*) PURE;
	STDMETHOD(put_onload)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onload)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onerror)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onerror)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onabort)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onabort)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_name)(THIS_ BSTR) PURE;
	STDMETHOD(get_name)(THIS_ BSTR*) PURE;
	STDMETHOD(put_width)(THIS_ long) PURE;
	STDMETHOD(get_width)(THIS_ long*) PURE;
	STDMETHOD(put_height)(THIS_ long) PURE;
	STDMETHOD(get_height)(THIS_ long*) PURE;
	STDMETHOD(put_start)(THIS_ BSTR) PURE;
	STDMETHOD(get_start)(THIS_ BSTR*) PURE;
};
#undef INTERFACE

EXTERN_C const IID IID_IHTMLElementCollection;
#define INTERFACE IHTMLElementCollection
DECLARE_INTERFACE_(IHTMLElementCollection,IDispatch)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetTypeInfoCount)(THIS_ UINT*) PURE;
	STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,LPTYPEINFO*) PURE;
	STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*) PURE;
	STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*) PURE;

	STDMETHOD(toString)(THIS_ BSTR*) PURE;
	STDMETHOD(put_length)(THIS_ long) PURE;
	STDMETHOD(get_length)(THIS_ long*) PURE;
	STDMETHOD(get__newEnum)(THIS_ IUnknown**) PURE;
	STDMETHOD(item)(THIS_ VARIANT,VARIANT,IDispatch**) PURE;
	STDMETHOD(tags)(THIS_ VARIANT,IDispatch**) PURE;
};
#undef INTERFACE


EXTERN_C const IID IID_IHTMLDocument;
#define INTERFACE IHTMLDocument
DECLARE_INTERFACE_(IHTMLDocument,IDispatch)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetTypeInfoCount)(THIS_ UINT*) PURE;
	STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,LPTYPEINFO*) PURE;
	STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*) PURE;
	STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*) PURE;

	STDMETHOD(get_Script)(THIS_ IDispatch**) PURE;
};
#undef INTERFACE

EXTERN_C const IID IID_IHTMLDocument2;
#define INTERFACE IHTMLDocument2
DECLARE_INTERFACE_(IHTMLDocument2,IHTMLDocument)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetTypeInfoCount)(THIS_ UINT*) PURE;
	STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,LPTYPEINFO*) PURE;
	STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*) PURE;
	STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*) PURE;

	STDMETHOD(get_Script)(THIS_ IDispatch**) PURE;

	STDMETHOD(get_all)(THIS_ LPHTMLELEMENTCOLLECTION*) PURE;
	STDMETHOD(get_body)(THIS_ LPHTMLELEMENT*) PURE;
	STDMETHOD(get_activeElement)(THIS_ LPHTMLELEMENT*) PURE;
	STDMETHOD(get_images)(THIS_ LPHTMLELEMENTCOLLECTION*) PURE;
	STDMETHOD(get_applets)(THIS_ LPHTMLELEMENTCOLLECTION*) PURE;
	STDMETHOD(get_links)(THIS_ LPHTMLELEMENTCOLLECTION*) PURE;
	STDMETHOD(get_forms)(THIS_ LPHTMLELEMENTCOLLECTION*) PURE;
	STDMETHOD(get_anchors)(THIS_ LPHTMLELEMENTCOLLECTION*) PURE;
	STDMETHOD(put_title)(THIS_ BSTR) PURE;
	STDMETHOD(get_title)(THIS_ BSTR*) PURE;
	STDMETHOD(get_scripts)(THIS_ LPHTMLELEMENTCOLLECTION*) PURE;
	STDMETHOD(put_designMode)(THIS_ BSTR) PURE;
	STDMETHOD(get_designMode)(THIS_ BSTR*) PURE;
	STDMETHOD(get_selection)(THIS_ LPHTMLSELECTIONOBJECT*) PURE;
	STDMETHOD(get_readyState)(THIS_ BSTR*) PURE;
	STDMETHOD(get_frames)(THIS_ LPHTMLFRAMESCOLLECTION*) PURE;
	STDMETHOD(get_embeds)(THIS_ LPHTMLELEMENTCOLLECTION*) PURE;
	STDMETHOD(get_plugins)(THIS_ LPHTMLELEMENTCOLLECTION*) PURE;
	STDMETHOD(put_alinkColor)(THIS_ VARIANT) PURE;
	STDMETHOD(get_alinkColor)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_bgColor)(THIS_ VARIANT) PURE;
	STDMETHOD(get_bgColor)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_fgColor)(THIS_ VARIANT) PURE;
	STDMETHOD(get_fgColor)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_linkColor)(THIS_ VARIANT) PURE;
	STDMETHOD(get_linkColor)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_vlinkColor)(THIS_ VARIANT) PURE;
	STDMETHOD(get_vlinkColor)(THIS_ VARIANT*) PURE;
	STDMETHOD(get_referrer)(THIS_ BSTR*) PURE;
	STDMETHOD(get_location)(THIS_ LPHTMLLOCATION*) PURE;
	STDMETHOD(get_lastModified)(THIS_ BSTR*) PURE;
	STDMETHOD(put_URL)(THIS_ BSTR) PURE;
	STDMETHOD(get_URL)(THIS_ BSTR*) PURE;
	STDMETHOD(put_domain)(THIS_ BSTR) PURE;
	STDMETHOD(get_domain)(THIS_ BSTR*) PURE;
	STDMETHOD(put_cookie)(THIS_ BSTR) PURE;
	STDMETHOD(get_cookie)(THIS_ BSTR*) PURE;
	STDMETHOD(put_expands)(THIS_ VARIANT_BOOL) PURE;
	STDMETHOD(get_expands)(THIS_ VARIANT_BOOL*) PURE;
	STDMETHOD(put_charset)(THIS_ BSTR) PURE;
	STDMETHOD(get_charset)(THIS_ BSTR*) PURE;
	STDMETHOD(put_defaultCharset)(THIS_ BSTR) PURE;
	STDMETHOD(get_defaultCharset)(THIS_ BSTR*) PURE;
	STDMETHOD(get_mimeType)(THIS_ BSTR*) PURE;
	STDMETHOD(get_fileSize)(THIS_ BSTR*) PURE;
	STDMETHOD(get_fileCreatedDate)(THIS_ BSTR*) PURE;
	STDMETHOD(get_fileModifiedDate)(THIS_ BSTR*) PURE;
	STDMETHOD(get_fileUpdatedDate)(THIS_ BSTR*) PURE;
	STDMETHOD(get_security)(THIS_ BSTR*) PURE;
	STDMETHOD(get_protocol)(THIS_ BSTR*) PURE;
	STDMETHOD(get_nameProp)(THIS_ BSTR*) PURE;
	STDMETHOD(write)(THIS_ SAFEARRAY*) PURE;
	STDMETHOD(writeln)(THIS_ SAFEARRAY*) PURE;
	STDMETHOD(open)(THIS_ BSTR,VARIANT,VARIANT,VARIANT,IDispatch**) PURE;
	STDMETHOD(close)(THIS) PURE;
	STDMETHOD(clear)(THIS) PURE;
	STDMETHOD(queryCommandSupported)(THIS_ BSTR,VARIANT_BOOL*) PURE;
	STDMETHOD(queryCommandEnabled)(THIS_ BSTR,VARIANT_BOOL*) PURE;
	STDMETHOD(queryCommandState)(THIS_ BSTR,VARIANT_BOOL*) PURE;
	STDMETHOD(queryCommandIndeterm)(THIS_ BSTR,VARIANT_BOOL*) PURE;
	STDMETHOD(queryCommandText)(THIS_ BSTR,BSTR*) PURE;
	STDMETHOD(queryCommandValue)(THIS_ BSTR,VARIANT*) PURE;
	STDMETHOD(execCommand)(THIS_ BSTR,VARIANT_BOOL,VARIANT,VARIANT_BOOL*) PURE;
	STDMETHOD(execCommandShowHelp)(THIS_ BSTR,VARIANT_BOOL*) PURE;
	STDMETHOD(createElement)(THIS_ BSTR,LPHTMLELEMENT*) PURE;
	STDMETHOD(put_onhelp)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onhelp)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onclick)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onclick)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_ondblclick)(THIS_ VARIANT) PURE;
	STDMETHOD(get_ondblclick)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onkeyup)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onkeyup)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onkeydown)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onkeydown)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onkeypress)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onkeypress)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onmouseup)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onmouseup)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onmousedown)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onmousedown)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onmousemove)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onmousemove)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onmouseout)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onmouseout)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onmouseover)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onmouseover)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onreadystatechange)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onreadystatechange)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onafterupdate)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onafterupdate)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onrowexit)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onrowexit)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onrowenter)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onrowenter)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_ondragstart)(THIS_ VARIANT) PURE;
	STDMETHOD(get_ondragstart)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onselectstart)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onselectstart)(THIS_ VARIANT*) PURE;
	STDMETHOD(elementFromPoint)(THIS_ long,long,LPHTMLELEMENT*) PURE;
	STDMETHOD(get_parentWindow)(THIS_ LPHTMLWINDOW2*) PURE;
	STDMETHOD(get_styleSheets)(THIS_ LPHTMLSTYLESHEETSCOLLECTION*) PURE;
	STDMETHOD(put_onbeforeupdate)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onbeforeupdate)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onerrorupdate)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onerrorupdate)(THIS_ VARIANT*) PURE;
	STDMETHOD(toString)(THIS_ BSTR*) PURE;
	STDMETHOD(createStyleSheet)(THIS_ BSTR,long,LPHTMLSTYLESHEET*) PURE;
};
#undef INTERFACE

EXTERN_C const IID IID_IHTMLSelectionObject;
#define INTERFACE IHTMLSelectionObject
DECLARE_INTERFACE_(IHTMLSelectionObject,IDispatch)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetTypeInfoCount)(THIS_ UINT*) PURE;
	STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,LPTYPEINFO*) PURE;
	STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*) PURE;
	STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*) PURE;

	STDMETHOD(createRange)(THIS_ IDispatch**) PURE;
	STDMETHOD(empty)(THIS) PURE;
	STDMETHOD(clear)(THIS) PURE;
	STDMETHOD(get_type)(THIS_ BSTR*) PURE;
};
#undef INTERFACE

EXTERN_C const IID IID_IHTMLTxtRange;
#define INTERFACE IHTMLTxtRange
DECLARE_INTERFACE_(IHTMLTxtRange,IDispatch)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetTypeInfoCount)(THIS_ UINT*) PURE;
	STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,LPTYPEINFO*) PURE;
	STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*) PURE;
	STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*) PURE;

	STDMETHOD(get_htmlText)(THIS_ BSTR*) PURE;
	STDMETHOD(put_text)(THIS_ BSTR) PURE;
	STDMETHOD(get_text)(THIS_ BSTR*) PURE;
	STDMETHOD(parentElement)(THIS_ LPHTMLELEMENT*) PURE;
	STDMETHOD(duplicate)(THIS_ IHTMLTxtRange**) PURE;
	STDMETHOD(inRange)(THIS_ IHTMLTxtRange*,VARIANT_BOOL*) PURE;
	STDMETHOD(isEqual)(THIS_ IHTMLTxtRange*,VARIANT_BOOL*) PURE;
	STDMETHOD(scrollIntoView)(THIS_ VARIANT_BOOL) PURE;
	STDMETHOD(collapse)(THIS_ VARIANT_BOOL) PURE;
	STDMETHOD(expand)(THIS_ BSTR,VARIANT_BOOL*) PURE;
	STDMETHOD(move)(THIS_ BSTR,long,long*) PURE;
	STDMETHOD(moveStart)(THIS_ BSTR,long,long*) PURE;
	STDMETHOD(moveEnd)(THIS_ BSTR,long,long*) PURE;
	STDMETHOD(select)(THIS) PURE;
	STDMETHOD(pasteHTML)(THIS_ BSTR) PURE;
	STDMETHOD(moveToElementText)(THIS_ LPHTMLELEMENT) PURE;
	STDMETHOD(setEndPoint)(THIS_ BSTR,IHTMLTxtRange*) PURE;
	STDMETHOD(compareEndPoints)(THIS_ BSTR,IHTMLTxtRange*,long*) PURE;
	STDMETHOD(findText)(THIS_ BSTR,long,long,VARIANT_BOOL*) PURE;
	STDMETHOD(moveToPoint)(THIS_ long,long) PURE;
	STDMETHOD(getBookmark)(THIS_ BSTR*) PURE;
	STDMETHOD(moveToBookbark)(THIS_ BSTR,VARIANT_BOOL*) PURE;
	STDMETHOD(queryCommandSupported)(THIS_ BSTR,VARIANT_BOOL*) PURE;
	STDMETHOD(queryCommandEnabled)(THIS_ BSTR,VARIANT_BOOL*) PURE;
	STDMETHOD(queryCommandState)(THIS_ BSTR,VARIANT_BOOL*) PURE;
	STDMETHOD(queryCommandIndeterm)(THIS_ BSTR,VARIANT_BOOL*) PURE;
	STDMETHOD(queryCommandText)(THIS_ BSTR,BSTR*) PURE;
	STDMETHOD(queryCommandValue)(THIS_ BSTR,VARIANT*) PURE;
	STDMETHOD(execCommand)(THIS_ BSTR,VARIANT_BOOL,VARIANT,VARIANT_BOOL*) PURE;
	STDMETHOD(execCommandShowHelp)(THIS_ BSTR,VARIANT_BOOL*) PURE;
};
#undef INTERFACE

EXTERN_C const IID IID_IHTMLElement;
#define INTERFACE IHTMLElement
DECLARE_INTERFACE_(IHTMLElement,IDispatch)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetTypeInfoCount)(THIS_ UINT*) PURE;
	STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,LPTYPEINFO*) PURE;
	STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*) PURE;
	STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*) PURE;

	STDMETHOD(setAttribute)(THIS_ BSTR,VARIANT,long) PURE;
	STDMETHOD(getAttribute)(THIS_ BSTR,long,VARIANT*) PURE;
	STDMETHOD(removeAttribute)(THIS_ BSTR,long,VARIANT_BOOL*) PURE;
	STDMETHOD(put_className)(THIS_ BSTR) PURE;
	STDMETHOD(get_className)(THIS_ BSTR*) PURE;
	STDMETHOD(put_id)(THIS_ BSTR) PURE;
	STDMETHOD(get_id)(THIS_ BSTR*) PURE;
	STDMETHOD(get_tagName)(THIS_ BSTR*) PURE;
	STDMETHOD(get_parentElement)(THIS_ LPHTMLELEMENT*) PURE;
	STDMETHOD(get_style)(THIS_ LPHTMLSTYLE*) PURE;
	STDMETHOD(put_onhelp)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onhelp)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onclick)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onclick)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_ondblclick)(THIS_ VARIANT) PURE;
	STDMETHOD(get_ondblclick)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onkeydown)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onkeydown)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onkeyup)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onkeyup)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onkeypress)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onkeypress)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onmouseout)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onmouseout)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onmouseover)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onmouseover)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onmousemove)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onmousemove)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onmousedown)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onmousedown)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onmouseup)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onmouseup)(THIS_ VARIANT*) PURE;
	STDMETHOD(get_document)(THIS_ IDispatch**) PURE;
	STDMETHOD(put_title)(THIS_ BSTR) PURE;
	STDMETHOD(get_title)(THIS_ BSTR*) PURE;
	STDMETHOD(put_language)(THIS_ BSTR) PURE;
	STDMETHOD(get_language)(THIS_ BSTR*) PURE;
	STDMETHOD(put_onselectstart)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onselectstart)(THIS_ VARIANT*) PURE;
	STDMETHOD(scrollIntoView)(THIS_ VARIANT) PURE;
	STDMETHOD(contains)(THIS_ LPHTMLELEMENT,VARIANT_BOOL*) PURE;
	STDMETHOD(get_source3Index)(THIS_ long*) PURE;
	STDMETHOD(get_recordNumber)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_lang)(THIS_ BSTR) PURE;
	STDMETHOD(get_lang)(THIS_ BSTR*) PURE;
	STDMETHOD(get_offsetLeft)(THIS_ long*) PURE;
	STDMETHOD(get_offsetTop)(THIS_ long*) PURE;
	STDMETHOD(get_offsetWidth)(THIS_ long*) PURE;
	STDMETHOD(get_offsetHeight)(THIS_ long*) PURE;
	STDMETHOD(get_offsetParent)(THIS_ LPHTMLELEMENT*) PURE;
	STDMETHOD(put_innerHTML)(THIS_ BSTR) PURE;
	STDMETHOD(get_innerHTML)(THIS_ BSTR*) PURE;
	STDMETHOD(put_innerText)(THIS_ BSTR) PURE;
	STDMETHOD(get_innerText)(THIS_ BSTR*) PURE;
	STDMETHOD(put_outerHTML)(THIS_ BSTR) PURE;
	STDMETHOD(get_outerHTML)(THIS_ BSTR*) PURE;
	STDMETHOD(put_outerText)(THIS_ BSTR) PURE;
	STDMETHOD(get_outerText)(THIS_ BSTR*) PURE;
	STDMETHOD(insertAdjacentHTML)(THIS_ BSTR,BSTR) PURE;
	STDMETHOD(insertAdjacentText)(THIS_ BSTR,BSTR) PURE;
	STDMETHOD(get_parentTextEdit)(THIS_ LPHTMLELEMENT*) PURE;
	STDMETHOD(isTextEdit)(THIS_ VARIANT_BOOL*) PURE;
	STDMETHOD(click)(THIS) PURE;
	STDMETHOD(get_filters)(THIS_ LPHTMLFILTERSCOLLECTION*) PURE;
	STDMETHOD(put_ondragstart)(THIS_ VARIANT) PURE;
	STDMETHOD(get_ondragstart)(THIS_ VARIANT*) PURE;
	STDMETHOD(toString)(THIS_ BSTR*) PURE;
	STDMETHOD(put_onbeforeupdate)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onbeforeupdate)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onafterupdate)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onafterupdate)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onerrorupdate)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onerrorupdate)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onrowexit)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onrowexit)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onrowenter)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onrowenter)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_ondatasetchanged)(THIS_ VARIANT) PURE;
	STDMETHOD(get_ondatasetchanged)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_ondataavailable)(THIS_ VARIANT) PURE;
	STDMETHOD(get_ondataavailable)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_ondatasetcomplete)(THIS_ VARIANT) PURE;
	STDMETHOD(get_ondatasetcomplete)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onfilterchange)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onfilterchange)(THIS_ VARIANT*) PURE;
	STDMETHOD(get_children)(THIS_ IDispatch**) PURE;
	STDMETHOD(get_all)(THIS_ IDispatch**) PURE;
};
#undef INTERFACE

EXTERN_C const IID IID_IHTMLFramesCollection2;
#define INTERFACE IHTMLFramesCollection2
DECLARE_INTERFACE_(IHTMLFramesCollection2,IDispatch)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetTypeInfoCount)(THIS_ UINT*) PURE;
	STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,LPTYPEINFO*) PURE;
	STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*) PURE;
	STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*) PURE;

    STDMETHOD(item)(THIS_ VARIANT*,VARIANT*) PURE;
    STDMETHOD(get_length)(THIS_ long*) PURE;
};
#undef INTERFACE

EXTERN_C const IID IID_IHTMLWindow2;
#define INTERFACE IHTMLWindow2
DECLARE_INTERFACE_(IHTMLWindow2,IHTMLFramesCollection2)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetTypeInfoCount)(THIS_ UINT*) PURE;
	STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,LPTYPEINFO*) PURE;
	STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*) PURE;
	STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*) PURE;
	STDMETHOD(item)(THIS_ VARIANT*,VARIANT*) PURE;
	STDMETHOD(get_length)(THIS_ long*) PURE;

	STDMETHOD(get_frames)(THIS_ IHTMLFramesCollection2**) PURE;
	STDMETHOD(put_defaultStatus)(THIS_ BSTR) PURE;
	STDMETHOD(get_defaultStatus)(THIS_ BSTR*) PURE;
	STDMETHOD(put_status)(THIS_ BSTR) PURE;
	STDMETHOD(get_status)(THIS_ BSTR*) PURE;
	STDMETHOD(setTimeout)(THIS_ BSTR,long,VARIANT*,long*) PURE;
	STDMETHOD(clearTimeout)(THIS_ long) PURE;
	STDMETHOD(alert)(THIS_ BSTR) PURE;
	STDMETHOD(confirm)(THIS_ BSTR,VARIANT_BOOL*) PURE;
	STDMETHOD(prompt)(THIS_ BSTR,BSTR,VARIANT*) PURE;
	STDMETHOD(get_Image)(THIS_ LPHTMLIMAGEELEMENTFACTORY*) PURE;
	STDMETHOD(get_location)(THIS_ LPHTMLLOCATION*) PURE;
	STDMETHOD(get_history)(THIS_ LPOMHISTORY*) PURE;
	STDMETHOD(close)(THIS) PURE;
	STDMETHOD(put_opener)(THIS_ VARIANT) PURE;
	STDMETHOD(get_opener)(THIS_ VARIANT*) PURE;
	STDMETHOD(get_navigator)(THIS_ LPOMNAVIGATOR*) PURE;
	STDMETHOD(put_name)(THIS_ BSTR) PURE;
	STDMETHOD(get_name)(THIS_ BSTR*) PURE;
	STDMETHOD(get_parent)(THIS_ LPHTMLWINDOW2*) PURE;
	STDMETHOD(open)(THIS_ BSTR,BSTR,BSTR,VARIANT_BOOL,LPHTMLWINDOW2*) PURE;
	STDMETHOD(get_self)(THIS_ LPHTMLWINDOW2*) PURE;
	STDMETHOD(get_top)(THIS_ LPHTMLWINDOW2*) PURE;
	STDMETHOD(get_window)(THIS_ LPHTMLWINDOW2*) PURE;
	STDMETHOD(navigate)(THIS_ BSTR) PURE;
	STDMETHOD(put_onfocus)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onfocus)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onblur)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onblur)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onload)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onload)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onbeforeunload)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onbeforeunload)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onunload)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onunload)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onhelp)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onhelp)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onerror)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onerror)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onresize)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onresize)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onscroll)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onscroll)(THIS_ VARIANT*) PURE;
	STDMETHOD(get_document)(THIS_ IHTMLDocument2**) PURE;
	STDMETHOD(get_event)(THIS_ LPHTMLEVENTOBJ*) PURE;
	STDMETHOD(get__newEnum)(THIS_ IUnknown**) PURE;
	STDMETHOD(showModalDialog)(THIS_ BSTR,VARIANT*,VARIANT*,VARIANT*) PURE;
	STDMETHOD(showHelp)(THIS_ BSTR,VARIANT,BSTR) PURE;
	STDMETHOD(get_screen)(THIS_ LPHTMLSCREEN*) PURE;
	STDMETHOD(get_Option)(THIS_ LPHTMLOPTIONELEMENTFACTORY*) PURE;
	STDMETHOD(focus)(THIS) PURE;
	STDMETHOD(get_closed)(THIS_ VARIANT_BOOL*) PURE;
	STDMETHOD(blur)(THIS) PURE;
	STDMETHOD(scroll)(THIS_ long,long) PURE;
	STDMETHOD(get_clientInformation)(THIS_ LPOMNAVIGATOR*) PURE;
	STDMETHOD(setInterval)(THIS_ BSTR,long,VARIANT*,long*) PURE;
	STDMETHOD(clearInterval)(THIS_ long) PURE;
	STDMETHOD(put_offscreenBuffering)(THIS_ VARIANT) PURE;
	STDMETHOD(get_offscreenBuffering)(THIS_ VARIANT*) PURE;
	STDMETHOD(execScript)(THIS_ BSTR,BSTR,VARIANT*) PURE;
	STDMETHOD(toString)(THIS_ BSTR*) PURE;
	STDMETHOD(scrollBy)(THIS_ long,long) PURE;
	STDMETHOD(scrollTo)(THIS_ long,long) PURE;
	STDMETHOD(moveTo)(THIS_ long,long) PURE;
	STDMETHOD(moveBy)(THIS_ long,long) PURE;
	STDMETHOD(resizeTo)(THIS_ long,long) PURE;
	STDMETHOD(resizeBy)(THIS_ long,long) PURE;
	STDMETHOD(get_external)(THIS_ IDispatch**) PURE;
};
#undef INTERFACE

EXTERN_C const IID IID_IHTMLFrameBase;
#define INTERFACE IHTMLFrameBase
DECLARE_INTERFACE_(IHTMLFrameBase,IDispatch)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetTypeInfoCount)(THIS_ UINT*) PURE;
	STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,LPTYPEINFO*) PURE;
	STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*) PURE;
	STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*) PURE;

	STDMETHOD(put_src)(THIS_ BSTR) PURE;
	STDMETHOD(get_src)(THIS_ BSTR*) PURE;
	STDMETHOD(put_name)(THIS_ BSTR) PURE;
	STDMETHOD(get_name)(THIS_ BSTR*) PURE;
	STDMETHOD(put_border)(THIS_ VARIANT) PURE;
	STDMETHOD(get_border)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_frameBorder)(THIS_ BSTR) PURE;
	STDMETHOD(get_frameBorder)(THIS_ BSTR*) PURE;
	STDMETHOD(put_frameSpacing)(THIS_ VARIANT) PURE;
	STDMETHOD(get_frameSpacing)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_marginWidth)(THIS_ VARIANT) PURE;
	STDMETHOD(get_marginWidth)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_marginHeight)(THIS_ VARIANT) PURE;
	STDMETHOD(get_marginHeight)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_noResize)(THIS_ VARIANT_BOOL) PURE;
	STDMETHOD(get_noResize)(THIS_ VARIANT_BOOL*) PURE;
	STDMETHOD(put_scrolling)(THIS_ BSTR) PURE;
	STDMETHOD(get_scrolling)(THIS_ BSTR*) PURE;
};
#undef INTERFACE

EXTERN_C const IID IID_IHTMLFrameBase2;
#define INTERFACE IHTMLFrameBase2
DECLARE_INTERFACE_(IHTMLFrameBase2,IDispatch)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetTypeInfoCount)(THIS_ UINT*) PURE;
	STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,LPTYPEINFO*) PURE;
	STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*) PURE;
	STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*) PURE;

	STDMETHOD(get_contentWindow)(THIS_ IHTMLWindow2 **) PURE;
	STDMETHOD(put_onload)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onload)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onreadystatechange)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onreadystatechange)(THIS_ VARIANT*) PURE;
	STDMETHOD(get_readyState)(THIS_ BSTR*) PURE;
	STDMETHOD(put_allowTransparency)(THIS_ VARIANT_BOOL) PURE;
	STDMETHOD(get_allowTransparency)(THIS_ VARIANT_BOOL*) PURE;
};
#undef INTERFACE

EXTERN_C const IID IID_IHTMLFrameBase3;
#define INTERFACE IHTMLFrameBase3
DECLARE_INTERFACE_(IHTMLFrameBase3,IDispatch)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetTypeInfoCount)(THIS_ UINT*) PURE;
	STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,LPTYPEINFO*) PURE;
	STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*) PURE;
	STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*) PURE;

	STDMETHOD(put_longDesc)(THIS_ BSTR) PURE;
	STDMETHOD(get_longDesc)(THIS_ BSTR*) PURE;
};
#undef INTERFACE

EXTERN_C const IID IID_IHTMLBodyElement;
#define INTERFACE IHTMLBodyElement
DECLARE_INTERFACE_(IHTMLBodyElement,IDispatch)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetTypeInfoCount)(THIS_ UINT*) PURE;
	STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,LPTYPEINFO*) PURE;
	STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*) PURE;
	STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*) PURE;

	STDMETHOD(put_background)(THIS_ BSTR) PURE;
	STDMETHOD(get_background)(THIS_ BSTR*) PURE;
	STDMETHOD(put_bgProperties)(THIS_ BSTR) PURE;
	STDMETHOD(get_bgProperties)(THIS_ BSTR*) PURE;
	STDMETHOD(put_leftMargin)(THIS_ VARIANT) PURE;
	STDMETHOD(get_leftMargin)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_topMargin)(THIS_ VARIANT) PURE;
	STDMETHOD(get_topMargin)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_rightMargin)(THIS_ VARIANT) PURE;
	STDMETHOD(get_rightMargin)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_bottomMargin)(THIS_ VARIANT) PURE;
	STDMETHOD(get_bottomMargin)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_noWrap)(THIS_ VARIANT_BOOL) PURE;
	STDMETHOD(get_noWrap)(THIS_ VARIANT_BOOL*) PURE;
	STDMETHOD(put_bgColor)(THIS_ VARIANT) PURE;
	STDMETHOD(get_bgColor)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_text)(THIS_ VARIANT) PURE;
	STDMETHOD(get_text)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_link)(THIS_ VARIANT) PURE;
	STDMETHOD(get_link)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_vLink)(THIS_ VARIANT) PURE;
	STDMETHOD(get_vLink)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_aLink)(THIS_ VARIANT) PURE;
	STDMETHOD(get_aLink)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onload)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onload)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onunload)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onunload)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_scroll)(THIS_ BSTR) PURE;
	STDMETHOD(get_scroll)(THIS_ BSTR*) PURE;
	STDMETHOD(put_onselect)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onselect)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onbeforeunload)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onbeforeunload)(THIS_ VARIANT*) PURE;
	STDMETHOD(createTextRange)(THIS_ IHTMLTxtRange**) PURE;
};
#undef INTERFACE

EXTERN_C const IID IID_IHTMLBodyElement2;
#define INTERFACE IHTMLBodyElement2
DECLARE_INTERFACE_(IHTMLBodyElement2,IDispatch)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetTypeInfoCount)(THIS_ UINT*) PURE;
	STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,LPTYPEINFO*) PURE;
	STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*) PURE;
	STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*) PURE;

	STDMETHOD(put_onbeforeprint)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onbeforeprint)(THIS_ VARIANT*) PURE;
	STDMETHOD(put_onafterprint)(THIS_ VARIANT) PURE;
	STDMETHOD(get_onafterprint)(THIS_ VARIANT*) PURE;
};
#undef INTERFACE

#ifdef __cplusplus
}
#endif
#endif

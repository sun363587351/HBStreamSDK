/* BaseintcommonObject.h
   Generated by gSOAP 2.8.10 from BaseInterface.h

Copyright(C) 2000-2012, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
1) GPL or 2) Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef BaseintcommonObject_H
#define BaseintcommonObject_H
#include "BaseH.h"

/******************************************************************************\
 *                                                                            *
 * Service Object                                                             *
 *                                                                            *
\******************************************************************************/

class intcommonService : public soap
{    public:
	intcommonService()
	{ static const struct Namespace namespaces[] =
{
	{"SOAP-ENV", "http://schemas.xmlsoap.org/soap/envelope/", "http://www.w3.org/*/soap-envelope", NULL},
	{"SOAP-ENC", "http://schemas.xmlsoap.org/soap/encoding/", "http://www.w3.org/*/soap-encoding", NULL},
	{"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
	{"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
	{"ns", "http://haibogroup.com.cn", NULL, NULL},
	{"ns1", "http://servlet.manage.haibo.com", NULL, NULL},
	{"nsCXF", "http://servlet.webservice.skynet.botech.com/", NULL, NULL},
	{NULL, NULL, NULL, NULL}
};

	this->namespaces = namespaces; };
	virtual ~intcommonService() { };
	/// Bind service to port (returns master socket or SOAP_INVALID_SOCKET)
	virtual	SOAP_SOCKET bind(const char *host, int port, int backlog) { return soap_bind(this, host, port, backlog); };
	/// Accept next request (returns socket or SOAP_INVALID_SOCKET)
	virtual	SOAP_SOCKET accept() { return soap_accept(this); };
#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
	/// Then accept SSL handshake, when SSL is used
	virtual	int ssl_accept() { return soap_ssl_accept(this); };
#endif
	/// Serve this request (returns error code or SOAP_OK)
	virtual	int serve() { return soap_serve(this); };
};

/******************************************************************************\
 *                                                                            *
 * Service Operations (you should define these globally)                      *
 *                                                                            *
\******************************************************************************/


SOAP_FMAC5 int SOAP_FMAC6 ns__SwitchCameraToStream(struct soap*, struct ns__HBUSERINFO nsUserInfo, long CamID, struct ns__HBNET_VIDEO_STREAM *Url);

SOAP_FMAC5 int SOAP_FMAC6 ns__PTZCtrlCamera(struct soap*, struct ns__HBUSERINFO nsUserInfo, long CamID, struct ns__HBNET_CAMERA_PTZCTRL *Data, struct ns__Response *Result);

SOAP_FMAC5 int SOAP_FMAC6 ns__AbandonCameraStream(struct soap*, struct ns__HBUSERINFO nsUserInfo, long CamID, struct ns__Response *Result);

SOAP_FMAC5 int SOAP_FMAC6 ns__QueryVideoRecord(struct soap*, struct ns__HBUSERINFO nsUserInfo, long CamID, struct ns__HBNET_RECOED_FILECOND *Param, char *&RecodeList);

SOAP_FMAC5 int SOAP_FMAC6 ns__QueryVideoUrl(struct soap*, struct ns__HBUSERINFO nsUserInfo, long CamID, struct ns__HBNET_RECOED_FILECOND *Param, char *&RecodeList);

SOAP_FMAC5 int SOAP_FMAC6 ns__PlayVideoRecord(struct soap*, struct ns__HBUSERINFO nsUserInfo, long CamID, struct ns__HBNET_VIDEO_STREAM *Data, struct ns__HBNET_VIDEO_STREAM_RESP *Out);

SOAP_FMAC5 int SOAP_FMAC6 ns__DownloadVideoRecord(struct soap*, struct ns__HBUSERINFO nsUserInfo, long CamID, char *szFileName, char *&OutFileName);

SOAP_FMAC5 int SOAP_FMAC6 ns__AbandonVideoRecord(struct soap*, struct ns__HBUSERINFO nsUserInfo, long CamID, char *FileName, struct ns__Response *Result);

SOAP_FMAC5 int SOAP_FMAC6 ns__HeartBeat(struct soap*, struct ns_HeartBeat nsHeartBeat, struct ns__Response *Result);

SOAP_FMAC5 int SOAP_FMAC6 ns__AutoSysUpdate(struct soap*, std::string strXmlFile, struct ns__Response *Result);

SOAP_FMAC5 int SOAP_FMAC6 ns__NetMaster(struct soap*, int nIsOK, int &nResult);

SOAP_FMAC5 int SOAP_FMAC6 ns__HBOperate(struct soap*, char *szXml, char *&szXmlRes);

SOAP_FMAC5 int SOAP_FMAC6 ns__PlayVideoRecordSIP(struct soap*, struct ns__HBUSERINFO nsUserInfo, long CamID, struct ns__HBNET_RECOED_FILECOND *Param, struct ns__HBNET_VIDEO_STREAM *Url, std::string &strCallID);

SOAP_FMAC5 int SOAP_FMAC6 ns__DownloadVideoRecordSIP(struct soap*, struct ns__HBUSERINFO nsUserInfo, long CamID, struct ns__HBNET_RECOED_FILECOND *Param, struct ns__HBNET_VIDEO_STREAM *Url, std::string &strCallID);

SOAP_FMAC5 int SOAP_FMAC6 ns__AbandonVideoRecordSIP(struct soap*, struct ns__HBUSERINFO nsUserInfo, long CamID, std::string strCallID, struct ns__Response *Result);

SOAP_FMAC5 int SOAP_FMAC6 ns__AbandonVideoDownSIP(struct soap*, struct ns__HBUSERINFO nsUserInfo, long CamID, std::string strCallID, struct ns__Response *Result);

SOAP_FMAC5 int SOAP_FMAC6 ns__CtrlVideoRecord(struct soap*, struct ns__HBUSERINFO nsUserInfo, long CamID, struct ns__HBNET_RECOED_PLAYCTRL *Pctrl, std::string strCallID, struct ns__Response *Result);

SOAP_FMAC5 int SOAP_FMAC6 __ns1__getData(struct soap*, _ns1__getData *ns1__getData, _ns1__getDataResponse *ns1__getDataResponse);

SOAP_FMAC5 int SOAP_FMAC6 __nsCXF__getDataCxf(struct soap*, nsCXF__getDataCxf *nsCXF__getDataCxf_, nsCXF__getDataCxfResponse *nsCXF__getDataCxfResponse_);

#endif

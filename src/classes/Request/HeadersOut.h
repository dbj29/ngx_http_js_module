#ifndef _NGX_HTTP_JS_NGINX_HEADERS_OUT_H_INCLUDED_
#define _NGX_HTTP_JS_NGINX_HEADERS_OUT_H_INCLUDED_

extern JSClass ngx_http_js__nginx_headers_out__class;
extern JSObject *ngx_http_js__nginx_headers_out__prototype;

extern JSBool
ngx_http_js__nginx_headers_out__init(JSContext *cx, JSObject *global);

extern JSObject *
ngx_http_js__nginx_headers_out__wrap(JSContext *cx, JSObject *request, ngx_http_request_t *r);

extern void
ngx_http_js__nginx_headers_out__cleanup(ngx_http_js_ctx_t *ctx, ngx_http_request_t *r, JSContext *cx);


#endif

#ifndef AXTLS_YAHOO_CERTS_H
#define AXTLS_YAHOO_CERTS_H

// .query.yahoo.com (YQL)
#include "entrust_net_secure_server_certification_authority.h"

// login.yahoo.com api.flickr.com
#include "gte_cybertrust_global_root.h"

// api.flickr.com (does not validate without intermediary present)
#include "digicert_high_assurance_ev_root_ca.h"
#include "baltimore_cybertrust_root.h"

// api.flickr.com (another one)
#include "class_3_public_primary_certification_authority.h"
#include "verisign_class_3_public_primary_certification_authority.h"

#endif	/* AXTLS_YAHOO_CERTS_H */

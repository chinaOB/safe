#ifndef BITCOIN_CHAINPARAMSSEEDS_H
#define BITCOIN_CHAINPARAMSSEEDS_H
/**
 * List of fixed seed nodes for the bitcoin network
 * AUTOGENERATED by contrib/seeds/generate-seeds.py
 *
 * Each line contains a 16-byte IPv6 address and a port.
 * IPv4 as well as onion addresses are wrapped inside a IPv6 address accordingly.
 */
 // ***TODO*** fix generate-seeds.py and REGENERATE

#if defined(HAVE_CONFIG_H)

static SeedSpec6 pnSeed6_main[1];

static SeedSpec6 pnSeed6_test[1];

#else

static SeedSpec6 pnSeed6_main[] = {
};

static SeedSpec6 pnSeed6_test[] = {
};

#endif  // HAVE_CONFIG_H

#endif // BITCOIN_CHAINPARAMSSEEDS_H

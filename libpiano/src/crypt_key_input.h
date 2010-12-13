/*
Copyright (c) 2008-2010
	Lars-Dominik Braun <PromyLOPh@lavabit.com>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

#ifndef _CRYPT_KEY_INPUT_H
#define _CRYPT_KEY_INPUT_H

#include <stdint.h>

/* decryption key for last 48 bytes of audio urls
 * search for rpc.input in the decompiled pandora actionscript
 */

const unsigned int in_key_n = 16;

static const uint32_t in_key_p [16 + 2] = {
		0xCB42446BL, 0x84C9ADD7L, 0x58BB40B6L, 0x67309C28L,
		0x847AE93FL, 0x634B08FAL, 0x7B41B0E7L, 0x6CA77EA8L,
		0x680A3F07L, 0x32C26224L, 0x15F68F8FL, 0x84983ECEL,
		0xE88938C0L, 0xFB2F1633L, 0x172C14BDL, 0xEDD40F8CL,
		0xFF10C4FBL, 0x22B7AB11L,
		};

static const uint32_t in_key_s [4][256] = {{
		0x44B440E2L, 0xE99DBE06L, 0xB9F1A081L, 0x0933FCA1L,
		0x6B412E99L, 0xB30F4B41L, 0xE32063E6L, 0xF9C0101EL,
		0x5265F727L, 0x678F8106L, 0xACF39C5CL, 0x28F2868FL,
		0x5475BE2FL, 0x404DE0BCL, 0x23468728L, 0x184A1488L,
		0xEA971385L, 0x2F886887L, 0x5E95611CL, 0x239508CCL,
		0x88355159L, 0x5E7E789FL, 0x9A805DAFL, 0xEC5AB7E0L,
		0x4A3E4C9FL, 0xA2BE130CL, 0xEE7E0076L, 0x05B9A2F8L,
		0x6D7AD1C3L, 0x3CAA426EL, 0x2879FC42L, 0x29BB3A22L,
		0x62AE8B5DL, 0xC561999BL, 0x98D278B1L, 0x0373DDA7L,
		0x3CED65D5L, 0x4540C197L, 0x8AE57D79L, 0x24F37705L,
		0x54E2BF0CL, 0xCAF2D2C8L, 0xAB85D018L, 0xBBD96449L,
		0xB36A13B9L, 0x3C44EB0AL, 0xD820C26BL, 0xF90B784DL,
		0xAB672603L, 0xD532CF15L, 0x7FFB6686L, 0x7BE27118L,
		0x793DDA02L, 0xE73107DDL, 0x2632F764L, 0x6FBE7A13L,
		0x65982C19L, 0xAFF729A3L, 0x69B5BBF7L, 0x2864B0FAL,
		0x8AED80D3L, 0x0AEB3597L, 0x13689958L, 0x80B40D77L,
		0x3D9641A8L, 0xF24E7E40L, 0xB9E7A890L, 0xDC02983DL,
		0xD9050DA9L, 0xFB874500L, 0xB2C64291L, 0xDC12F8F5L,
		0x128A5CD2L, 0x527F82D3L, 0xCD7C1081L, 0xC5EBDB5FL,
		0xF968BDD0L, 0xF3E427A3L, 0xBCF76022L, 0xA94CA0BBL,
		0x28884495L, 0x8214C39CL, 0x6851B166L, 0xEBA17650L,
		0x95729279L, 0xCE1666C5L, 0x6A57605DL, 0x1BD16C4BL,
		0x59EF9ECCL, 0xE7C09A6AL, 0x24673702L, 0x0E7CE01EL,
		0x3636E13AL, 0x40F429BAL, 0x9FBA277EL, 0x9AE49DD0L,
		0x300E6BABL, 0x201ADB58L, 0xC029E2D9L, 0xE5C74ED7L,
		0x5C143553L, 0x8E747F2CL, 0x159043C5L, 0x379614D4L,
		0x9075D06FL, 0x585C1BC2L, 0xE9D22CC1L, 0x0914AEC0L,
		0xB3B46C73L, 0xC96D2F00L, 0xB14BB0D9L, 0x46A5C5B6L,
		0x0E3516F4L, 0xEB9AB01EL, 0x5C04E434L, 0x284AAFB4L,
		0x1BCAF462L, 0xF1A5542AL, 0xBBD03E4AL, 0x4BDC3DA7L,
		0x6BD0FCC9L, 0x40D21E00L, 0x32E2AEF1L, 0xEF62B668L,
		0x344EA1BAL, 0x46B1BD02L, 0xCAFE4DC6L, 0x15BE27F0L,
		0xBFF5A998L, 0x3B0D9B30L, 0x27CA9A40L, 0x84C597FFL,
		0xD6859FE3L, 0x5D045192L, 0x2A002659L, 0xCC8B3052L,
		0xFAEFE7C2L, 0xEB9F883EL, 0x69772177L, 0x5FA05797L,
		0x69DF2134L, 0xDACC373BL, 0x3C035B9EL, 0x977A58DCL,
		0x84D49E26L, 0x912CFF20L, 0xDFA2D5A6L, 0x0CA8AA62L,
		0x53CC93D9L, 0x3DD8536AL, 0xF40CF797L, 0xC6EF5FA5L,
		0xDDBF6EA2L, 0xFF79AD8BL, 0x9CC8F9B6L, 0x9070482EL,
		0xB6779612L, 0x0A7C86DFL, 0x968E17A3L, 0x28CA9EF1L,
		0x86DB025BL, 0xF2A80541L, 0x2631C384L, 0x5750F7E3L,
		0x78191CBFL, 0x4025BF50L, 0x1E032A2BL, 0xC3B4DE8DL,
		0xAC98A492L, 0xCD90D98FL, 0x92B02F24L, 0xFC462ECFL,
		0x435695A9L, 0xEDECDDA4L, 0x297B6304L, 0xD973A25AL,
		0x65A7991DL, 0x8B727303L, 0xC8F89BD7L, 0xCF18B1D7L,
		0x60A234FFL, 0x13E68F78L, 0xF919D31AL, 0x5249D0A5L,
		0x117B11AAL, 0xEF6D0783L, 0x2128D583L, 0xA7A24FEAL,
		0xD9C379ECL, 0x86A4C5ADL, 0xF3CDAA1CL, 0x04A8A51FL,
		0xE19C74E7L, 0x578622A0L, 0xFD70277DL, 0xEDD3226AL,
		0x503434D8L, 0x31A8EBB5L, 0x9122632EL, 0x7EF237DAL,
		0xA59DEF47L, 0xDD87BA93L, 0x7965AB65L, 0x26790F7CL,
		0xDFDF407BL, 0xAF80CDF0L, 0xA9E55C4FL, 0x54B77138L,
		0x39B26324L, 0xBE3FD4CDL, 0xDEB06C51L, 0xEEB11B71L,
		0x90B974D4L, 0xE125702EL, 0x9F6E26EAL, 0x6E4574E1L,
		0x0ABC33CAL, 0x3F51A4B0L, 0x225E548AL, 0x7D275103L,
		0x3849134BL, 0xE32DC3B0L, 0x08297936L, 0x788C457BL,
		0x17F9219EL, 0xE7E6FE7DL, 0xD79DB0B0L, 0xD3F8FEF0L,
		0x8B0D4DBFL, 0x210883B0L, 0xEACAC580L, 0xAEC1E03EL,
		0xF2A7678AL, 0x76457B5BL, 0xB518F841L, 0x31E3B067L,
		0x4E972C3BL, 0x19E5A9BCL, 0xB7438C21L, 0x4C5B5F28L,
		0xFBB2E5BDL, 0x7734BB35L, 0x705A9013L, 0xD132FAC5L,
		0x99F8BC98L, 0x8E6B0A9DL, 0xB287744FL, 0x4CBC0613L,
		0xF094CEB8L, 0xF93137B0L, 0x9242EE26L, 0xC25D9AEBL,
		0xD517C2F2L, 0xEC2F7F38L, 0xE18380AFL, 0x22C2678AL,
		}, {
		0xDE0A562AL, 0x596C7989L, 0x2E99CBDEL, 0x5CC946AFL,
		0x2DA232BFL, 0x64145592L, 0x7885E518L, 0x85B53628L,
		0xFB83003EL, 0x5F643977L, 0x193D31BFL, 0x0FDB8849L,
		0x2BA77CF5L, 0x86D0A1A5L, 0x48803977L, 0xB670B7DDL,
		0x2924E754L, 0x333CAA9FL, 0x994FF797L, 0x9858B8BEL,
		0x22BFD9ADL, 0x1A51D7DCL, 0x372CD282L, 0xB38A5CA4L,
		0xB0B6858DL, 0x4F5CAD72L, 0x3C0DC2D6L, 0xEB090786L,
		0xC45E17FCL, 0xF0C37D9CL, 0x8315CA42L, 0x336E14D8L,
		0xE4DA980CL, 0x14EEBD73L, 0xA82E556CL, 0x4ABA084AL,
		0x9EEC5155L, 0x0CA47152L, 0x03BE2A25L, 0x874F8618L,
		0xC3C31219L, 0x8554B382L, 0x26FFF693L, 0xD9FE05D6L,
		0xC69BB513L, 0xC547ED34L, 0x44F66E01L, 0x58B32FD0L,
		0xF9F7FA8AL, 0xFEF4A493L, 0x2999E20BL, 0x6D23743FL,
		0x97E2A9DCL, 0x1916908AL, 0x905CBF0DL, 0xE0290BDBL,
		0xC06B65EFL, 0xE5A45154L, 0x45ABB6ECL, 0xDD329C85L,
		0xEDF93835L, 0xE5D485D5L, 0x248B2CD5L, 0x60CC627BL,
		0x2B3224F1L, 0xD7DFA43DL, 0xD5D6DA9AL, 0x7A3F9A29L,
		0x26605F98L, 0x435FB927L, 0xED9A7CD7L, 0x6020C2EFL,
		0x43AC15D0L, 0x05FE8353L, 0x74AF1FB8L, 0xADFDC949L,
		0x3BA09A14L, 0x2BC91C0DL, 0x7D681AD5L, 0xA08CA21CL,
		0x208C85ADL, 0x0F3DE514L, 0xB4C87BE1L, 0x455233DCL,
		0xFF35FDF1L, 0xCE93E7E9L, 0x409BA175L, 0x817C4198L,
		0x749B8E5AL, 0xBA599286L, 0x44E40068L, 0x7FA013C6L,
		0x9D62E731L, 0x453F48E4L, 0x375CADBEL, 0xC3D661D5L,
		0xA96A5BF9L, 0x9D2B321AL, 0x0A144AFBL, 0x01590B67L,
		0x9887312FL, 0x7592FB46L, 0x99AC6DD8L, 0xAA347510L,
		0x0F3DC8A9L, 0x9BE58B17L, 0x49C674FCL, 0x3D1F5303L,
		0x138E2052L, 0x1B7CA3EBL, 0xB3C8BE68L, 0xB5C6CB1DL,
		0xBA62EA1CL, 0x269241DBL, 0xA0EE1AB3L, 0x8EB3E79CL,
		0x94EA0E9FL, 0xB86FFB54L, 0x56DCBF7FL, 0x3404FD03L,
		0x8076B757L, 0xB05A9529L, 0x8CC7B224L, 0x4F29804CL,
		0x6CD2C621L, 0x99424188L, 0xF89E7F5DL, 0xFDF62C52L,
		0x94D264B1L, 0x9AE26508L, 0xE7C1DF25L, 0xFCE03375L,
		0x4111F745L, 0x46978B8AL, 0x6D3DEBE0L, 0xA8C9A4A1L,
		0xBF9ADEE2L, 0x651A9A66L, 0x37EBEFEDL, 0x6BAC6274L,
		0xED007BFAL, 0x8B00DB5DL, 0x8EB88E4FL, 0x7247626BL,
		0xC70E0D71L, 0xB06D9EC3L, 0x777CBB67L, 0x9812CC56L,
		0x12ACE7D0L, 0xEE395981L, 0xFE39A6EFL, 0xC1F592CDL,
		0xB8C0866DL, 0xC0D8526EL, 0xC6AA7A35L, 0x91113015L,
		0x36CC0A0DL, 0xD1E8DBA0L, 0x074756C8L, 0xFC272600L,
		0x6C33093EL, 0x44D5C245L, 0xCA27B4C7L, 0x5A794CFAL,
		0x459D3DD0L, 0x0F7D4917L, 0x139A3245L, 0x9B2E5E3CL,
		0x31018582L, 0x759B9D72L, 0x8BDD1D9BL, 0xA16CB7FCL,
		0x3BBE42B1L, 0x87E40683L, 0x9BE04779L, 0xE9DDE72BL,
		0x0BE9A89AL, 0x1CB85941L, 0x96134FD9L, 0xFB347B02L,
		0xD908504AL, 0x71F33096L, 0x705269F0L, 0x3EF468FDL,
		0xC97983DAL, 0x71277190L, 0x8C2B030FL, 0x8CAE4554L,
		0x2E643F45L, 0xE16A9CE9L, 0x2C06928EL, 0xC7E0F46AL,
		0xBDDCEB74L, 0x74985EDBL, 0xBC223E1DL, 0x7F8F5B2AL,
		0x1EBFAFBCL, 0x3B60AE99L, 0x63083D95L, 0x2905083CL,
		0xF926F42EL, 0xD5389D31L, 0x6CA90A33L, 0xE1158CAAL,
		0x352434A4L, 0xB45FD6B1L, 0x17389418L, 0x70D400F6L,
		0x9127D3E0L, 0xA8EB8D18L, 0x39020FBEL, 0x417AB2E5L,
		0xA5E92B88L, 0x5F36AEFCL, 0x4057731CL, 0xD1E966F7L,
		0x0DA44875L, 0x3BE7D0DBL, 0x1C7850CDL, 0xE3B1462EL,
		0xF9AFEFF6L, 0x210E1CCEL, 0x36FBB8AEL, 0x8584030DL,
		0x2DD9731AL, 0x9554A44BL, 0x2C6F8100L, 0x983A1BE5L,
		0x25FAF22DL, 0x338316A7L, 0x0E5A690DL, 0xE702EBEBL,
		0x52AC420EL, 0xEAC503EFL, 0xD2FE1B98L, 0xE1D55B98L,
		0xD7DD5C6EL, 0xE756FFF0L, 0xD3FD66EBL, 0x1FD30A11L,
		0x03E18282L, 0x856F2216L, 0x6917F24CL, 0x12975941L,
		0xD98387CAL, 0x2B9E153FL, 0xFD7005E0L, 0x05A501F2L,
		0xA731DB07L, 0xBF268F18L, 0x47E9E9C2L, 0x442148F8L,
		0x1CCF6FACL, 0x239820BEL, 0x56C0EC64L, 0xC6C59DF1L,
		},{
		0x1D985BEEL, 0x336930D2L, 0xCA40E672L, 0x7036E21CL,
		0x7B43BD3CL, 0xA02DBD7DL, 0x7DFA1A92L, 0xB13508C5L,
		0x01633D3CL, 0x6CBD1AA5L, 0xCDC61031L, 0x15993E15L,
		0x669E1B6FL, 0x78B79587L, 0x61D58836L, 0x888D5578L,
		0x8B99F671L, 0x346906B6L, 0x5EA37C50L, 0xC32C7220L,
		0xAA6101DEL, 0xAF0CD647L, 0x9840E7DFL, 0xBC4EB801L,
		0x071126BAL, 0xCD6D71A4L, 0x0CDA5F16L, 0x7838C18CL,
		0x8F1641CBL, 0x7DF307E3L, 0xB83E78D1L, 0x24E91D07L,
		0x0F5BB3BCL, 0x172BDFFBL, 0xD24AA952L, 0x41CF15C3L,
		0x78A696A5L, 0x15CD0C0AL, 0xD24D916DL, 0xA2CF942CL,
		0xA1EC1AAAL, 0x0B48FCE0L, 0xE1779859L, 0x99F8806AL,
		0x34333D69L, 0xABBA62D0L, 0xF6E91D76L, 0x0B0D5FDAL,
		0x5A467847L, 0x74DA0A4DL, 0x0335F980L, 0xE7C55B44L,
		0x6DD5E917L, 0xC7305285L, 0xCF1D07C6L, 0x8D017ECBL,
		0xE10A16C1L, 0x0DB9438CL, 0x2FA12B58L, 0x332FA54DL,
		0x02BD7743L, 0x4B544614L, 0x7907B6AEL, 0x75401EBAL,
		0xF7382064L, 0xF1325592L, 0x06FB5C05L, 0x9F5FEF1FL,
		0x3A641771L, 0x807BF700L, 0xC63EDF23L, 0x9FFD35E9L,
		0x437A410EL, 0x225D18FBL, 0xAD901352L, 0x9D2F8585L,
		0xEA317135L, 0xCB724C48L, 0xCA568A14L, 0xB153340AL,
		0x88794F5FL, 0x0C208094L, 0x85BE94E6L, 0x86C5F48AL,
		0xFC4AC759L, 0xFCCEA783L, 0x491AF14BL, 0x23C9622CL,
		0x85660BAFL, 0x110300CBL, 0xDE2D8E21L, 0xBAD7D22BL,
		0x3649D2A8L, 0x64439BF3L, 0xFDD7F2ADL, 0x68129C07L,
		0x3D03801DL, 0xE2D3B28CL, 0xA94193D2L, 0xEE2C34F0L,
		0x457DCDF1L, 0x4E21BC94L, 0x8F557C82L, 0x13EE8AB5L,
		0x0B2A8EC9L, 0x7796592BL, 0x5D9E3346L, 0x3621C85FL,
		0x1EB7FF52L, 0xCCDF71D8L, 0x538DD6AEL, 0x748274A9L,
		0x6552081CL, 0xFA61EE48L, 0xFB2A7098L, 0xA02BA33FL,
		0xB145EA01L, 0xE4C5DEC9L, 0x9E2BF9B1L, 0x6413006DL,
		0x8F7C7501L, 0x9B51E842L, 0x5ADD5755L, 0x06CAF452L,
		0x80050406L, 0xCB961521L, 0xEFC54E27L, 0x420EE737L,
		0xADB18EAEL, 0xF8B0B2FBL, 0xC8CDC88FL, 0x3A026D91L,
		0x5F99BB22L, 0x391C12F8L, 0xBDF1CEE6L, 0xFEBE0726L,
		0x6CC79280L, 0x3F7AC7F2L, 0x3B92345CL, 0x5C7BB986L,
		0xC60C12D7L, 0x4F29C1FAL, 0x04276434L, 0xC1272CD2L,
		0x5E64BC58L, 0xD473D8F8L, 0x38E9D502L, 0x5C00EE4EL,
		0x80A1A552L, 0xD49CD6D2L, 0xEA96CBE7L, 0x029E2A86L,
		0x0D04BA72L, 0xE9B0389DL, 0x4AC913EBL, 0x85927E61L,
		0x134A0D51L, 0xE63AFF82L, 0x5D7C3FEEL, 0x9373DA83L,
		0x361324B4L, 0x18569865L, 0x7EAC6BD8L, 0x945CA42CL,
		0x6A1FD8B8L, 0x6C9D06F7L, 0x01D4072FL, 0xAED3BEA5L,
		0x9C7BADA7L, 0x740C8802L, 0xAD1D6843L, 0xB84145EBL,
		0x2804CAEBL, 0x31EB19FBL, 0x402E5195L, 0x05451516L,
		0xF9770FC4L, 0x547FA291L, 0xF9B980EAL, 0xD6DC914DL,
		0x8A009CDFL, 0xFDFEDDADL, 0xEBAC5EF5L, 0x575B2AD2L,
		0x67A8655FL, 0x54590146L, 0x21FA9A1FL, 0xB8CD9B23L,
		0x1D313DFFL, 0xC5D15FFFL, 0xB6734243L, 0xD1B44EFFL,
		0xEE6DFF7EL, 0x0A6DB2BCL, 0x2A2AE34EL, 0x596782E6L,
		0x1DF3E26BL, 0xCE3EA01AL, 0x3CCBBEEFL, 0xD4B8AF1FL,
		0x555D5325L, 0x78F81205L, 0x528EFD8CL, 0x01F3D29FL,
		0xAD12326CL, 0x816D4F2EL, 0x6DD2FFE9L, 0x03C4EE90L,
		0xE9E561B6L, 0x28237064L, 0x82143F5FL, 0xEED4AA29L,
		0x9E63A1C6L, 0xB25E2AEAL, 0x516B9A8AL, 0xB52B4B71L,
		0xDDEF7CFFL, 0x6A8FFBDDL, 0x877EC0E5L, 0x72AF36D8L,
		0xF9EC2EC3L, 0xBD89E9AFL, 0x0A2FC438L, 0xD0E8BEE7L,
		0xD8979CF1L, 0x0AF071BEL, 0x0BC600C9L, 0x7E1F6318L,
		0xBFF4BF36L, 0x01DF67EEL, 0x6B35580BL, 0x2A3487ABL,
		0x1694328EL, 0x68358F88L, 0x23C60980L, 0xBE312A5BL,
		0x444E80C9L, 0x7ECE3A97L, 0xC3CE446CL, 0x5269084CL,
		0xC611CCE5L, 0xA156FBADL, 0xA2331EC8L, 0x1065EA4BL,
		0xA59F0F71L, 0xE46F2C17L, 0x2E2247DCL, 0xB5EBAA6FL,
		0xD8DE0349L, 0x0EA6F1B3L, 0x465FB0A0L, 0x0CE5A14CL,
		0x6A10A909L, 0xBCB590D3L, 0x8FA66C30L, 0xD1FCB44DL,
		},{
		0x475CA7E8L, 0x4C51BBC1L, 0xA90763E1L, 0x7BDF2294L,
		0x04D96F34L, 0x11318CB9L, 0x54A65710L, 0x041597BEL,
		0xC49B15C2L, 0x09B9521AL, 0x5589972BL, 0x10167358L,
		0xA3927ED5L, 0x405F7752L, 0x2CBCB573L, 0x37106B2EL,
		0x4CF216A4L, 0x5AB1D0F2L, 0x3ED8CA8EL, 0xA612D957L,
		0xADC5D570L, 0xD45C1E98L, 0x53C28628L, 0xBCF19A34L,
		0x6CA25F5CL, 0x5C5E4FA2L, 0x7C155954L, 0xE99CE5F9L,
		0xD9A180F9L, 0x4F3CF09BL, 0x9DDF75A6L, 0x6D240EE0L,
		0x67973B52L, 0xE13895B4L, 0x36ADE486L, 0x22EC32D2L,
		0x075D6EAEL, 0x29C31053L, 0xAC06EE74L, 0x1A9D3316L,
		0x8A2D0CC3L, 0x57DC77D3L, 0x40B2D07FL, 0xDFA2051AL,
		0xFDC90DFCL, 0x342E9AC5L, 0xB04EB091L, 0x9E1C2D1FL,
		0x075A20A3L, 0xE45FA195L, 0x3F958FE3L, 0x18C98F15L,
		0xC70AE917L, 0x78040F9BL, 0xE4322DEBL, 0x0903841FL,
		0xAE71257EL, 0xA82C7909L, 0xA398504BL, 0x56A9A694L,
		0x7DA7F73BL, 0x12942475L, 0xAAC0C982L, 0xDFD0E53EL,
		0x27CE728BL, 0xE94327CBL, 0xF2EBA423L, 0x72B1476EL,
		0x317756F6L, 0x056654E3L, 0x074C0192L, 0x11B6FF21L,
		0x939FD4C5L, 0xE6E45B55L, 0x66211539L, 0x753C6C46L,
		0x536DB219L, 0x939C3AF0L, 0x9783EE73L, 0xC8978DE8L,
		0xBA0329F6L, 0x3B892181L, 0x4CDA3336L, 0xFD15F1EFL,
		0xAE2B2E61L, 0x2637C83BL, 0x9D9930BFL, 0x72ADFC41L,
		0x48DBFFFFL, 0x448E80F4L, 0xBA1CC3E1L, 0x61CCB37DL,
		0xD3CFEC32L, 0x0E6804A9L, 0x1ECE11A1L, 0x15809783L,
		0x9F7FD813L, 0x64A39648L, 0x9E67CA64L, 0x19B3E4B8L,
		0x8740466AL, 0xEBB79667L, 0x1CE86B36L, 0xC7BCE505L,
		0x2445215DL, 0x54ADCC77L, 0xAB187AC2L, 0x97B82A38L,
		0xA66B2D42L, 0xA3D07412L, 0x4A9CB0F4L, 0x2C51F98CL,
		0xCA7FC25BL, 0x73AEB532L, 0xF45769BBL, 0x8068AEF4L,
		0x48A14C08L, 0x011E7A0BL, 0xD4FEF360L, 0xB572B6ECL,
		0x947692FFL, 0x8EB6BE12L, 0xDEB04AF3L, 0xA9CD494EL,
		0x7C522A9DL, 0x4CC24357L, 0x616E3132L, 0x68073F0DL,
		0x20F7237AL, 0x7EA98584L, 0x3B6BF43CL, 0x29F11571L,
		0x759B5F60L, 0x7D5BCACCL, 0x8C86BC43L, 0xB378EF1BL,
		0xD00EAF88L, 0xBD85FE1AL, 0xB4A42C5DL, 0x2075442DL,
		0x184038CCL, 0xC3D9F6F8L, 0x1D72BAC3L, 0xDD8C41C0L,
		0xD85F7634L, 0xB48A6902L, 0x8BB3F160L, 0x178CCA70L,
		0x4EE8D16EL, 0x5121D6FDL, 0xF2F09DA9L, 0x84B55B38L,
		0x8D081959L, 0x13F21DADL, 0x19BCDA5CL, 0x909A9FDFL,
		0x11AD6731L, 0x2CE9D09FL, 0xAA8E9543L, 0x9F8D5555L,
		0x679FE7C1L, 0x251591CBL, 0xC4187630L, 0x57324F07L,
		0xB2C35182L, 0xBD16E4F0L, 0xC3B3DE3FL, 0xEA6CBA23L,
		0x00C810DBL, 0xBB040931L, 0xE0BA08A6L, 0xDC4AC24BL,
		0xEE1428BBL, 0x964A6F9FL, 0x2096F5DCL, 0x2170A50CL,
		0x3FBCA4BDL, 0x7C321FAAL, 0x88679D5DL, 0x0F5FFFDCL,
		0x88AA1865L, 0xFD51E01AL, 0xA35EF105L, 0x8B99A039L,
		0xD5C22176L, 0xB1A73D55L, 0xA0080F3DL, 0xDBC61A70L,
		0x3FB106E3L, 0xBAEA8E73L, 0x7E34C1B3L, 0x40F3DC19L,
		0xFD9AEEE4L, 0xA3E6A013L, 0xEECF6A5EL, 0xA83012D4L,
		0xDEDF0B25L, 0x7CB1D8C2L, 0x02C4180CL, 0xE38905D8L,
		0x2D631C38L, 0x36612C66L, 0x9845588CL, 0x9510F7FDL,
		0xBCD5C8B1L, 0x55D50272L, 0x9B35118EL, 0xFB7C4E3FL,
		0x2E3BD98FL, 0x56DD4BD7L, 0x4C3B6F27L, 0x0264DDB7L,
		0xBD4A811CL, 0x2A9A4F84L, 0x2292258AL, 0xE7799B02L,
		0xF5B529B2L, 0x894B5D58L, 0xD3392CAAL, 0x515CCAC1L,
		0xB6857B04L, 0xB2CBE5DFL, 0x28B230C2L, 0xE3CE03F5L,
		0x0581D4DFL, 0x3CC0D279L, 0xD0C1EDECL, 0x160B926FL,
		0x32F58056L, 0x9D574911L, 0xED9FB621L, 0xA2D920F7L,
		0xB4BE7EACL, 0x6947D33FL, 0xBB438F92L, 0xDD11B405L,
		0xDEFF0F70L, 0x03B3E6A8L, 0x4BD0A277L, 0xE28FA297L,
		0x7098CAF4L, 0xB74B88E5L, 0xC3330744L, 0x77E7975AL,
		0xB35AC1B1L, 0x3BFEA68CL, 0x84BF6163L, 0x101D5CC0L,
		0xF4558349L, 0x0CF6A28BL, 0xD76AF6B8L, 0xD6A3140DL,
		0x3F37D065L, 0x0E55EA90L, 0xC1A759D1L, 0x70265EABL,
		}};

#endif /* _CRYPT_KEY_INPUT_H */

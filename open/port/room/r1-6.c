// copy from Room: /d/snow/hockshop.c
// made by chun,and copy by ccat

#include "/open/open.h"
#include <room.h>

inherit HOCKSHOP;

void create ()
{
	set("short","�߼ǵ���");
  set ("long", @LONG
�����Ǳ���Ψһ��һ�ҵ��� . ���ڷ��ָ۾��������ԣ 
 , ���ʳ��� . һ���ѵ��м���������� . �㿴�������������
��� , �������ֵ��������ּ�ֱ���������� . һ��ľ��(sign)
����������ķ��� .

LONG);

  set("exits", ([ /* sizeof() == 1 */
	"east" : "/open/port/room/r1-3",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "sign" : "	����������Ե䵱(pawn)��Ʒ�������(redeem)�䵱
	���������Ʒ��Ҳ���Լ���(value)��Ʒ�ļ�ֵ��
",
]));
  set("light_up", 1);

  setup();
}

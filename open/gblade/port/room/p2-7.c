// copy from Room: /d/snow/hockshop.c
// made by chun,and copy by ccat

#include "/open/open.h"
#include <room.h>

inherit HOCKSHOP;

void create ()
{
	set("short","���ֵ���");
  set ("long", @LONG
���Ƿ��ָ�Ψһ��һ�ҵ��� , ���ڷ��ָ۾�������ԣ ,
���Ϻ��з��� , �������� , ƽ�������������߽����� , λ�ڴ˾�
���ش� , �ؼ۸߰� , ��䵱�̿���Ҳ�Ų����� , һ��ľ��(sign)
����������ķ��� .

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"p2-2.c",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "sign" : "	����������Ե䵱(pawn)��Ʒ�������(redeem)�䵱
	���������Ʒ��Ҳ���Լ���(value)��Ʒ�ļ�ֵ��
",
]));
  set("light_up", 1);

  setup();
}

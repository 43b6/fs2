// copy from Room: /d/snow/hockshop.c
// made by chun,and copy by ccat

#include "/open/open.h"
#include <room.h>

inherit "/std/room/hockshop";

void create ()
{
  set ("short", "���е���");
  set ("long", @LONG
  ����һ���еȹ�ģ�ĵ��̣��ϾɵĹ�̨�Ϸ���һ��ľ��(sign),��
��Ĺ��߲��Ǻ���,һ����ɫ�������ų����,����д��

             ____ ��ӭ���� ____
             
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "sign" : "	����������Ե䵱(pawn)��Ʒ�������(redeem)�䵱
	���������Ʒ��Ҳ���Լ���(value)��Ʒ�ļ�ֵ��
",
]));

  set("exits", ([ /* sizeof() == 1 */
  "west" : "/open/gsword/room/su2",
]));


  set("light_up", 2);

  setup();
}

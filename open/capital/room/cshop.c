// made by chun,copy and re-edit by ccat
#include <room.h>
#include "/open/open.h"

inherit "/std/room/shop";

void create ()
{
  set ("short", "�ɼ�����");
  set ("long", @LONG
һ��������ͱ��Ǹ����ûʵ�װ�������㣬��װ��֮��������һ��
֮С���̽�Ȼ��ͬ����������ǳ����׸���ͨ��Ĳ�ҵ֮һ���������
���Ѿ��������ˣ����������ȫ�������ܹܲ�ʿ�ʸ����㡣���ұߵ�
ǽ�Ϲ��˸���ʾ(note)��

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "note" : "
	< value > : ����
	< list >  : �г�
        < buy  >  : ��
	< sell >  : ����
 ",
]));
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"h09.c",
]));
  set("light_up", 1);

  setup();
}

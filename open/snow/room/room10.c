#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
������ѩ���ɵ�����,�������Ժ��������Ļ��,��ɿ������Ե�ǽ
���Ե���Щ�߲�!!�������ƺ���һ����ʷ��!�����а��룺��֪�ж���
��Ӣ�ۺú��������˵�,����Ҳ���������Լ�������֮һ��...
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/snow/room/room2",
  "north" : "/open/snow/room/room13",
]));

  set("objects", ([ /* sizeof() == 1 */
  "/open/snow/npc/greeting_child" : 1,
]));

   set("light_up",1);

  set ("��Դ/Һ��", ([
       "����" : "ˮ",
       "����" : "��ˮ",
       "ֹ��" : 30
  ]) );

  setup();
}

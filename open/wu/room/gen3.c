inherit ROOM;
#include <ansi.h>
void create ()
{
  seteuid(getuid());    // ����˵Ҫ����һ����?
        set("short",HIC"-�����Թ�-"NOR);
        set("long", @LONG
���Ư���㲻֪���ںη�����ǰ���Ǹ��ֹŴ����ޣ�����������ޡ����
���׻����Ҳ�ʱ��������ĺ�����ʹ�㲻֪����Ǻá�
LONG
        );
        set("exits", ([ /* sizeof() == 1 */
  "����" : "/open/wu/room/gen3",
  "�׻�" : "/open/wu/room/gen2",
  "��ȸ" : "/open/wu/room/gen4",
  "����" : "/open/wu/room/gen4",
]));
  set("no_transmit",1);
  set("no_auc",1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/wu/npc/corpse" : 4,
]));
  setup();
}

inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", HIM"��ȥʱ��"NOR" ɽ��С��");
  set ("long", @LONG
������������һ��ɽ��С���ϣ����߲�Զ����������ˮ�̸�����ɫ��
���ߣ�С��������һ����ʯ����ͨ��ɽ�۵ĺ�̨���������ǡ�ˮ��ʮ����
֮���������ĺ�ȶ��£�С��������һ���ߡ��˳߸ߵ�ʯ��(stone)��

LONG);
  set("outdoors", "cele");
  set("exits", ([ /* sizeof() == 1 */
  "east" : "/d/cele/path1",
  "west"  : "/d/cele/path3",
]));

        set("item_desc", ([ /* sizeof() == 1 */
  "stone" : "
ʯ�����漸���Ծ����ӵ���д�������ʯ̨���ҳ���
ˮ�̸������ ���� ����¥ ����
����ϸһ�����⼸���ּ�˿��û�и���ۼ������������ֵ���ֱ��
����ָ����ʯ��д����һ�㡣",
]));
        set("no_clean_up", 0);

        setup();

}



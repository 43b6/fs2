inherit ROOM;
void create()
{
        set("short", "ҩ��");
        set("long", @LONG
���� :��ҽ�߿ɾ��ˣ�Ҳ��ɱ�ˡ�����仰���٣�����������ǰ�Ķ�
������֮�ݣ���ض��ǣ��ж���һ˲��Ķϳ��ݣ��Ž����ѣ����ղݵȵ�
���������Ȼ�뵽���֮��߲�֮�ڣ����н�ҩ��仰��
LONG
        );
        set("can_search",1);
        set("outdoors", 1);
        set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r5.c",
  "east" : __DIR__"r3.c",
]));
        set("no_clean_up", 0);

        setup();
        }



//written by wataru...../open/killer/mon/room/g1.c
inherit ROOM;

void create()
{
        set("short", "���������");
        set("long", @LONG
	����������֮��������������˵�У����غ�ɽ�����������ڵء�
	�ѹ������鲻��Ϊһ���������֣���Ϊ���Ｘ��û��ͻأ�����
	�е�ֻ��������Ȼ��ֲ�����������ľ�ס�����ճ����ġ�
	���ܴ�����������㣬����������Ȼ��ζ��������������ˬ��

LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "east" : __DIR__"g2.c",
       "west" : __DIR__"g7.c",
       "down" : __DIR__"wood31.c",
   ]));
   set("objects", ([ /* sizeof() == 1 */
       "/open/killer/mon/npc/grnnpc4.c":2,
       "/open/killer/mon/npc/spy5.c":1,
   ]));

        set("no_clean_up", 0);

        setup();
        }

//written by wataru...../open/killer/mon/room/g10.c
inherit ROOM;

void create()
{
        set("short", "�������鳤���ſ�");
        set("long", @LONG
	������ǰ����һ�������ţ����ֲ����ŵ�һ�����ϣ�

	�����ϵ񹦾�ϸ����ϸ������ỳ�������˿̵���

	�������ܰ˲�Ӧ�þ�����һ�����ϵĺ��棬

	��֪�����������Ƿ������ϣ���û�г�����ȥ�أ�
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "eastnorth" : __DIR__"g4.c",
       "westnorth" : __DIR__"g9.c",
       "enter" : __DIR__"g11.c",
   ]));
   set("objects", ([ /* sizeof() == 1 */
       "/open/killer/mon/npc/grnnpc4.c":2,
       "/open/killer/mon/npc/spy5.c":1,
   ]));

        set("no_clean_up", 0);

        setup();
        }

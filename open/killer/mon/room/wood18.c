//written by acelan...../u/a/acelan/room/wood18.c

inherit ROOM;

void create()
{
        set("short", "��ľ֮��");
        set("long", @LONG
������������ľ�ĵײ�, ��ľ�������Ѿ������ڿ�, ����ֱ��ͨ
������, ��������ľ���ܳ�������, �������ƺ��Ѿ�����ʹ����, ��
�ܲ�������̦, ��Ȼ�Ѿ��ܾ�û���˵����������ˡ�
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "up" : "/open/killer/mon/room/wood19.c",
       "west" : "/open/killer/mon/room/wood17.c",
   ]));
        set("no_clean_up", 0);

        setup();
        }

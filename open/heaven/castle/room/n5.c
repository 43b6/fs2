inherit ROOM;

void create()
{
        set("short", "�������޵�");
        set("long", @LONG
������ͨ�����֮�ǵıؾ�֮�أ�Ҳ�ǽ�������֮��ı�����Ⱥ --
���޳�û�ĵط��������������������һ��֮�䳤�����ս��ʹ��������
��ñ��壬����������߶�Ҫ����С�ģ������������֮�֡�
LONG
        );
        set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"n4.c",
]));
        set("no_clean_up", 0);
        set("outdoors", 1);

        setup();
        }


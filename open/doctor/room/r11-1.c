inherit ROOM;
void create()
{
        set("short", "ɹҩ̨");
        set("long", @LONG
վ�������ɫ��Ȼ���ʣ�����Զ��Զ���ľ��ż����������
����紵��������������ֵط�����ɹҩ̫��ϧ�ˣ������������ţ�
Ҫ����������Ʊ�ǲ���׬���ˡ�

LONG
        );
        set("can_search",1);
        set("outdoors",1);
        set("exits", ([ /* sizeof() == 1 */
       "down" : __DIR__"r11",
]));
        set("no_clean_up", 0);

        setup();
        }



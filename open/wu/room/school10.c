// Room: /u/d/devils/school10.c

inherit ROOM;

void create()
{
	set("short", "�ؾ���");
	set("long", @LONG
������������鷿,����ų���ǧ��,��������ĵ��Ӱ���ȡ��Ϊ�ؾ���
���Ĺ�����ƨ,��ʵ��,����Ҳֻ�ǲ����,��Ϊ������һ��Ҳ�ѵý��鷿����
,�����������!ǽ����һ������(couplet),��������������ģ�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"school8",
]));

        set("item_desc", ([
"couplet" : @LONG
                  
                        ˭      ��      ��      ս
  
                  ȭ                                  ��

                  ��                                  ��

                  ��                                  ��

                  ��                                  С

                  ��                                  ��

LONG
            ]));
        set("light_up", 1);
        setup();
}

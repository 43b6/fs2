// Room: /open/wu/room/luroom33.c
// ��ɽ��Ժ�鷿
inherit ROOM;
void create()
{
        set("short", "�鷿");
        set("long", @LONG
��������������鷿,������Ȼ����,��Ҳ��Ϊ�ɹ�,�鷿������
����һ����,��ϸһ�����������ǻ���ȭ��,����������һ��Ҳ��
�ý��鷿����,�����鶼��������!!ǽ����һ������(couplet),
��������������ģ�
LONG
        );
        set("exits", ([ /* sizeof() == 1 */
        "north" : __DIR__"luroom32",
        ]));
        set("item_desc", ([
       "couplet" : "
  
            ��                                  ��

            ��                                  ��

            ��                                  ��

            ��                                  ��

            Ϊ                                  ��

            ��                                  ��  ��
                                                    ��
            ��                                  ��  ��
          "]));
        set("light_up", 1);
        setup();
}

// Room: /open/wu/room/luroom17.c
// ��ɽ��ݵĴ���
inherit ROOM;
void create ()
{
  set ("short", "��ɽ��ݴ���");
  set ("long", @LONG
                 ��                        ��
                   �U�����������������������������U
                ���T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T��
                 �U����U����U  ����  �U����U����U
        ������������������������������������������������������
         ���T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T��
          ��������������  ��  ��  ά  ��  �������������切��
             ��|��������������������������������������|��
              ����     ����                 ����      ��
             _���� ��  �U�U ��  �������� �� �U�U  ��  ��
              ����     ����     ��������    ����      ��

������ɽ��ݴ���������������һ����(sign)���������׶�������������
װ�λ���������̫ʦ��λ�����ף����е�̫ʦ������һλ���ϵ����ߣ���
��������Ŀ�ⶢ���㣬�����ǹ�������������...
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "sign" : "
            ��ɽ��ѧ(lungshan) help lungshan
            �����ķ�(haoforce) help haoforce
            ���ջ�������(fire-kee) help fire-kee
      
",
]));
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"luroom17",
  "south" : __DIR__"luroom21",
  "east" : __DIR__"luroom19",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/daemon/class/fighter/master_jen" : 1,
]));
  set("valid_startroom", 1);

  setup();
call_other("/obj/board/lungshan_b.c","???");
}
int valid_leave(object me, string dir)
{
        if(me->query("family/family_name")!="��ɽ��"&&dir=="south")
return notify_fail("ֻ����ɽ���Ӳ��ܽ�!\n");
return ::valid_leave(me,dir);
}
void init()
{
  add_action("do_pass","pass");
}
int do_pass()
{
  object me;
  me = this_player();
  me->move("/open/center/room/inn");
  return 1;
}

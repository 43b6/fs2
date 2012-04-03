// Room: /u/s/sueplan/newplan/area/qroom1
inherit ROOM;

void create ()
{
  set ("short", "[1;37m��[1;32m������[1;37m��[0m");
  set ("long", @LONG
                      �� ���죩
                 ��     ________     ��
                  �u��  ________    �v
          ���󣩨u �u   ________   �v   ���磩
              �u �u �u            �v �v �v
               �u                   �v �v
                �u                    �v

       ��  ������                      ������  ��
           ��  ��                        ��
     ���𣩩�����                      ��������ˮ��

                �v                    �u
               �v                      �u
              �v  ���v  ___  ___  �u    �u
            ��  �v �v   ___  ___   �u     ��
                  �v    ___  ___    �u
              ��ɽ��                ���ף�
                        ��أ�

�����󩤩��ӹŴ��й�֮�׾������ݱ�������ɡ��㡢�����ޡ�������
�롢�ң���Ϊ��˸�������һ̤�����֮����������һ�����ʣ�����
Ϊ�λ���������ڴˣ���ʱǿ�ҵĺ�������ʹ���㣬���㲻���������봳
һ�����󣬴˰������ڰ����˸���Σ�����밮ϧ������
LONG);

  set("no_transmit", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/room/newplan/npc/man.c" : 1,
]));
  set("evil", 1);
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"f17.c",
]));
  set("no_auc", 1);

  setup();
}
void init()
{
add_action("do_search","search");
add_action("do_go","go");
}
int do_go(string str)
{
  object me;
  me=this_player();
  if(str=="����")
  {
    if(me->query_temp("six_ask")==10)
    {
    write("�����������һ����, �����˰�������!!\n");
    me->move(__DIR__"q2.c");
    return 1;
    }
  else
  {
  write("�㻹��֪��ʲô�ǰ������??\n");
  }
  }
}
int do_search()
{
  object me=this_player();
  if( me->query("family/family_name") =="����")
  {
  write("�㷢������·���Խ������(go ����)��\n");
  }
  else
  {
  write("���Ҳ���������Ȼ����\n");
  }
return 1;
}

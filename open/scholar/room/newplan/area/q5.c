// Room: /u/s/sueplan/newplan/area/qroom2
inherit ROOM;

void create ()
{
  set ("short", "[1;34m������[0m");
  set ("long", @LONG
                    ����    ����

                        ����    ����

                        ������������

                          ���ף�

֪Ϥ̫�������ǣ��������������������ԣ��˰���ʮ�Ļ���
�����й��׾�֮�����ڣ��������Դ˶������������ڱ�
����ǧ����ʹ����ʧ�ڲ��Ծ��䡣
����ǰ�����ٵķ�ɳ, ��ѡ��(move)��Ҫ�ߵķ���
[1;37m������-��, Ԫ, ��, ֧, ����, ��Ԫ, ֧��, ֧Ԫ��[0m
LONG);

  set("no_auc", 1);
  set("no_transmit", 1);

  setup();
}
void init()
{
add_action("do_move","move");
}
int do_move(string str)
{
  object me=this_player();
  if(str=="��")
  {
        me->move(__DIR__"qt1.c");
    return 1;
  }
  if(str=="Ԫ")
  {
        me->move(__DIR__"gr-4.c");
    return 1;
  }
  if(str=="��")
  {
    me->move(__DIR__"qt8.c");
    return 1;
  }
  if(str=="֧")
  {
    me->move(__DIR__"qt7.c");
    return 1;
  }
  if(str=="����")
  {
    me->move(__DIR__"qt6.c");
    return 1;
  }
  if(str=="��Ԫ")
  {
    me->move(__DIR__"qt5.c");
    return 1;
  }
  if(str=="֧��")
  {
    me->move(__DIR__"qt4.c");
    return 1;
  }
  if(str=="֧Ԫ")
  {
    me->move(__DIR__"qt3.c");
    return 1;
  }
}

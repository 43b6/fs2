// made by ccat
// ����...���� group move...     ccat....9_12.96
// ���� chun ����,�ĳ�ֻ���� officer �����ı��� follow ��player.
//                                               ccat....9_15,96
//change by xman ........97.11.17
//
#include <ansi.h>
inherit ITEM;
inherit F_GUILDCMDS;
inherit F_AUTOLOAD;
void create()
{
        set_name("������", ({ "cloud fan","fan" }) );
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
set("long",@LONG
      ����һ�������л����Ƶ�����,ר���ṩ����Ǯ��ʹ��,
      ֻҪ��Ǯׯ��,��Ϳ�����������ڱ���½.
      (����: ����һ�� 500 coin,ֱ�Ӵ�Ǯׯ��.)

      ʹ�ø�ʽ: waveto <number>    ex: waveto 1,waveto 2
      �ֽ��ṩ�ĸ�����: 1. ��������   2. ��������   3. ƽ������
                        4. ������վ   5. ���ƴ�     6. ������Ϸ�����
                        7. <set by u> 8. <set by u> 9. <set by u>
                       10. ���ָ�    11. �ɽ���    12. ħ��
                       13. ��ɽ��    14. ѩ����    15. ���µ�

      �趨��ʽ: fanset <number>   ex: fanset 7,fanset 8 (ֻ�� 7,8,9)
      ���Զ���������λ�ô�����,��Ϊ�µĴ��͵�.

      ��ѯ��ʽ: fanshow           ex: fanshow
      ���Բ�ѯ��Ĵ��͵�����.

      Ⱥ���ƶ�: gmove <on|off>  ex: gmove on,gmove off
      Ⱥ�崫��ģʽ ��|��,��  Ⱥ�崫��ģʽ ��,�� waveto �������������ı�
      �� follow�����   ........<gmove ��ɳ��(xman)һ��ʹ��>............
LONG
               );
                set("value", 1000);
        }
}
void init()
{
        if( environment() == this_player() ){
        add_action("do_fanset", "fanset");
        add_action("do_fanshow", "fanshow");
        add_action("do_waveto", "waveto");
        add_action("do_gmove", "gmove");
        }
}

int do_gmove(string arg)
{
   object me;
   me = this_player();
   if( me->query("id") != "xman")
   {
      write("�������� ɳ��(xman)һ��ʹ��.\n");
      return 1;
   }
   switch(arg)
   {
     case "on":
           me->set_temp("gmove",1);
           write("Ⱥ���ƶ�ģʽ ����(on)!!!\n");
           break;
     case "off":
           me->delete_temp("gmove");
           write("Ⱥ���ƶ�ģʽ �ر�(off)!!!\n");
           break;
     default:
           write("Ⱥ���ƶ�: gmove <on|off>\n");
   }
  return 1;
}

int do_fanset(string arg)
{
    int no_transmit;
    string str,str_s;
    object me,where;
    if( (arg != "7") && (arg != "8") && (arg != "9") )
    {
      write("��ֻ���趨���͵� 7,8,9...\n");
      return 1;
    }
    me = this_player();
    where = environment(me);
    no_transmit = where->query("no_transmit",1);
    str_s = where->query("short");
    str=file_name(where);
    if( arg == "7")
    {
      me->set_temp("fan/7",str);
      me->set_temp("fan_s/7",str_s);
    }
    if( arg == "8")
    {
      me->set_temp("fan/8",str);
      me->set_temp("fan_s/8",str_s);
    }
    if( arg == "9")
    {
      me->set_temp("fan/9",str);
      me->set_temp("fan_s/9",str_s);
    }
    write("���趨����Ϊ����´��͵�.\n");
    return 1;
}
int do_fanshow(string arg)
{
    object me;
    string str_s;
    me = this_player();
    str_s = me->query_temp("fan_s/7");
    printf("���͵� 7 ��%s.\n",str_s);
    str_s = me->query_temp("fan_s/8");
    printf("���͵� 8 ��%s.\n",str_s);
    str_s = me->query_temp("fan_s/9");
    printf("���͵� 9 ��%s.\n",str_s);
    return 1;
}
int do_waveto(string arg)
{
    mixed count;
    int money,i,gmove;
    object me,roomm,env;

    string room="";
    me = this_player();
    if( me->query_temp("unconcious") )          return 0;
    message_vision( RED+"ֻ��һ�����绮����"HIR"$N"RED"��ʧ����Ӱ���١�\n"+NOR ,me);
    switch(arg)
    {
       case "1":
         room="/open/capital/room/r70";         break;
       case "2":
         room="/open/gsword/room/su3";          break;
       case "3":
         room="/open/ping/room/road4";          break;
       case "4":
         room="/open/center/room/inn";          break;
       case "5":
         room="/open/start/room/s5";            break;
       case "10":
         room="/open/port/room/r3-1";           break;
       case "6":
         room = me->query("startroom");         break;
       case "7":
         room = me->query_temp("fan/7");        break;
       case "8":
         room = me->query_temp("fan/8");        break;
       case "9":
         room = me->query_temp("fan/9");        break;
       case "11":
         room ="/open/gsword/room/g5-1";        break;
       case "12":
         room ="/open/poison/room/room1";       break;
       case "13":
         room ="/open/wu/room/school8";         break;
       case "14":
         room ="/open/snow/room/room2";         break;
       case "15":
         room ="/open/dancer/room/start";       break;
       default:
     }
     gmove = me->query_temp("gmove");
     if( gmove )
     {
       roomm = environment(this_player());
     }

     // ��� room �Ƿ����, gmove on|off ������,�ʷŴ�
     env = environment(me);
     if( !me->move(room) ){
       write (" ������˵: ��Ҫ���ң�����û��ط�..."HIC"-_-;\n"NOR);
        return 1;
     }

   if( gmove )
   {
     count = all_inventory( roomm );
     for( i=0;i < sizeof( count ) ;i++)
     {
       if( count[i]->is_character() &&
       ( count[i]->query_temp("id") == me->query("id")
          || count[i]->query_leader() == me ) )
             count[i]->move(room);
     }
   }

// ��������room ��ռ��̫�������, �벻Ҫ������ɾ��
   if( !sizeof(all_inventory(env)) && ( !env->query("objects")
    || !sizeof(env->query("objects")) ) ) destruct(env);

     if( gmove )
     {
        message_vision(RED+"һ���׵罻�Ӻ�"HIR"$N"RED"�����ҳ����ڴ�!!\n"+NOR,me);
     }else
        message_vision(RED+"һ���׵罻�Ӻ�"HIR"$N"RED"�ڴ˽���!!\n"+NOR,me);

     me->set("bank/coin",money-500);
     return 1;
}
int query_autoload()
{
  if (wizardp(this_player()))
    return 1;
  else return 0;
}


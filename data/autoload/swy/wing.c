#include <ansi.h>
inherit ITEM;
inherit F_GUILDCMDS;
void create()
{
        set_name(HIW"�������"NOR,({ "swy-wing","wing" }) );
        set_weight(10);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "˫");
      set("long",@LONG

����ƯƯ����������ܴ������䵽��ȥ�ĵط�
ʹ�ø�ʽ��waveto <number>

�ֽ��ṩ�ĸ����㣺
1. ��������   2. ��������   3. ƽ������
4. ������վ   5. ���ƴ�     6. ������Ϸ�����
7. <set by u> 8. <set by u> 9. <set by u>
10. ���ָ�

�ֽ��ṩ�ĸ����ɴ��㣺
  sa=���˹�  teng=�ɽ���  yua=����  jen=������
duan=�μ�     sue=����     lu=���  liu=ѩ��
 yar=ɱ��     low=ħ��    lee=���� chen=��Ա
 lin=ʥ��   bonze=���� doctor=ҽ��

��ѯ��ʽ��fanshow
���Բ�ѯ��Ĵ��͵�����

Ⱥ���ƶ���gmove <on or off>
Ⱥ�崫��ģʽ����أ���Ⱥ�崫��ģʽ������ waveto ������
�������ı��� follow �����

LONG);
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

int query_autoload()
{
if(this_player()->query("swy")==1)
return 1;
}
int do_gmove(string arg)
{
   object me;
   me = this_player();
   switch(arg)
   {
     case "on": 
           me->set_temp("gmove",1);
           write("Ⱥ���ƶ�ģʽ ����(on)\n");   
           break;
     case "off":
           me->delete_temp("gmove");
           write("Ⱥ���ƶ�ģʽ �ر�(off)\n");       
           break;
     default:
           write("Ⱥ���ƶ���gmove <on or off>\n");      
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
    if( me->is_fighting() )
        return notify_fail("ս�����޷�ʹ�û����ȡ�\n");
    if( me->query_temp("������") )
        return notify_fail("�������޷�ʹ�û����ȡ�\n");
    message_vision(HIW+"ֻ�����Ͻ���һ��ʥ�⣬$N"+HIW+"��ʧ��ʥ����\n"+NOR,me);
    switch(arg)
    {
       case "1":
         room="/open/capital/room/r70";		break;
       case "2":
         room="/open/gsword/room/su3";		break;
       case "3":
         room="/open/ping/room/road4";		break;
       case "4":
         room="/open/center/room/inn";		break;
       case "5":
         room="/open/start/room/s5";		break;
       case "10":
         room="/open/port/room/r3-1";		break;   
       case "6":
	 room = me->query("startroom");		break;
       case "7":
         room = me->query_temp("fan/7");	break;
       case "8":
         room = me->query_temp("fan/8");	break;
       case "9":
         room = me->query_temp("fan/9");	break;
       case "sa":
         room = "/open/badman/room/g1";         break;
       case "teng":
         room = "/open/gsword/room/g5-1";       break;
       case "yua":
         room = "/open/dancer/room/start";      break;
       case "jen":
         room = "/open/wu/room/luroom18";       break;
       case "duan":
         room = "/open/ping/room/p1";           break;
       case "sue":
         room = "/open/scholar/room/r17";       break;
       case "lu":
         room = "/open/tendo/room/start";       break;
       case "liu":
         room = "/open/snow/room/room2";        break;
       case "yar":
         room = "/open/killer/room/masterm";    break;
       case "low":
         room = "/open/poison/room/room1";      break;
       case "lee":
         room = "/open/marksman/room/room1-31"; break;
       case "chen":
         room = "/open/capital/room/chen_home"; break;
       case "lin":
         room = "/open/prayer/room/punch1"; break;
       case "bonze":
         room = "/open/bonze/room/big";  break;
       case "doctor":
         room = "/open/doctor/room/2";   break;
       default:
       write("�� look wing �ɡ�\n");
     }
     gmove = me->query_temp("gmove");
     if( gmove )
     {
       roomm = environment(this_player());
     }

     // ��� room �Ƿ����, gmove on|off ������,�ʷŴ�
     env = environment(me);
     if( !me->move(room) ){
	write("�޴˵ص�\n");
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
message_vision(HIB+"һ��ʥ��ɢȥ��$N"+HIB+"��������Ѵ�Ŀ��\n"+NOR,me);
     }else
message_vision(HIC+"���컮��һ��ʥ�⣬$N"+HIC+"��Ȼ�س����ڴ�\n"+NOR,me);
     return 1;
}

// made by ccat  
// ����...���� group move...     ccat....9_12.96
// ���� chun ����,�ĳ�ֻ���� officer �����ı��� follow ��player.  
//                                               ccat....9_15,96
#include <ansi.h>
inherit ITEM;
inherit F_GUILDCMDS;
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
                       10. ���ָ�
 
      �趨��ʽ: fanset <number>   ex: set 7,set 8 (ֻ�� 7,8,9)
      ���Զ���������λ�ô�����,��Ϊ�µĴ��͵�.                                          
 
      ��ѯ��ʽ: fanshow           ex: fanshow
      ���Բ�ѯ��Ĵ��͵�����.
      
      Ⱥ���ƶ�: gmove <on|off>  ex: gmove on,gmove off
      Ⱥ�崫��ģʽ ��|��,��  Ⱥ�崫��ģʽ ��,�� waveto �������������ı�
      �� follow�����   ........<gmove �޹�Ա(officer)ʹ��>............
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
   if( me->query("class") != "officer")
   {
      write("�������� ��Ա(officer)ʹ��.\n");
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
    if(no_transmit)
    {
     write("һ��ǿ��Ĵų��ӵص״���,����������趨,\n");
     write("�ƺ�����Ĵ���Ը�˵ؿ��Դ���...\n");
     return 1;
    }
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
    object me,roomm;
    string room="";
    me = this_player();
    if( me->query_temp("unconcious") )          return 0;
    if( me->is_fighting() )
        return notify_fail("ս�����޷�ʹ�û����ȡ�\n");
    if( me->query_temp("������") )
        return notify_fail("�������޷�ʹ�û����ȡ�\n");
    if( environment(me)->query("no_transmit") )
    {
       write("ͻȻһ�������ӵص׷���,��ɢ�����������ƶ�,\n");
       write("�ƺ�����Ĵ���Ը�˵ؿ��Դ���...\n");
       return 1;
    }  
    money = me->query("bank/coin");
    if( money < 500)
    {
       write(" ������˵: ��Ĵ���,�޷�֧������.\n");
       return 1;
    }
    message_vision( HIB+"ֻ�����Ͻ���һ����¤����$N\n"+NOR ,me);   
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
       default:
     }
     gmove = me->query_temp("gmove");
     if( gmove )
     {
       roomm = environment(this_player());
     }

     // ��� room �Ƿ����, gmove on|off ������,�ʷŴ�
     if( !me->move(room) ){
	write(" ������˵: �޴˵ص�...\n");
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
     
/*    no_transmit һ���޷� fanset,��һ���޷�����,�˴����� ...ccat...9_12.96 
      if( environment(me)->query("no_transmit") ) {
     	message_vision(HIB+"ͻȻһ�������ӵص׷���,��$N���ƶ䵯�ߡ�\n"+NOR,me);
	me->move("/open/common/room/inn");
     }
     else
 */    
     if( gmove )
     {
        message_vision(HIB+"һ��������,$N�����Ҵ������.\n"+NOR,me);
     }else
        message_vision(HIB+"һ��������,$N�������.\n"+NOR,me);

     me->set("bank/coin",money-500);
     return 1;
}

int query_autoload()
{
  return 1;
}
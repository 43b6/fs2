#include <ansi.h>
inherit COMBINED_ITEM;

void create()
{
        set_name(HIB"�����ɱ��"NOR, ({"bluekill card","card"}) );
	set("long",
"����Ǵ�˵�е������ɱ�������ǧ�����������õ����ˡ�\n"+
"�����鲢�������������ֻ��ɱ��ȫ��׷ɱ����ͷ�Ż��������˿�����������׷ɱ��\n"+
"ʹ�÷���bluekill xxxxx    xxxx��ָ����ҵ�ID���ұ���Ϊɱ��ȫ��׷ɱ����ͷ\n"+
"ֻ��һ�εĻ��ᣬ�����ڸý�ɫ����������ȥ����ͷ������Ҷ��ɱ\n");

	seteuid(getuid());
	set("unit","��");
        set("base_unit", "��");
	set("no_sell",1);
	set("no_give",1);
	set("no_drop",1);
	set("no_auc",1);
	set("value",0);
	set("weight",500);
	set_amount(1);
        setup();
}

void init()
{
  if( this_player()==environment() )
  {
    add_action("blue_kill", "bluekill");
  }
}

int blue_kill(string arg)
{      

   object ob,me=this_player();
   string obn;
   object ob1,ob2,ob3,ob4;

   ob1=new("/open/killer/headkill/npc/blunpc1");
   ob2=new("/open/killer/headkill/npc/blunpc2");
   ob3=new("/open/killer/headkill/npc/blunpc3");
   ob4=new("/open/killer/headkill/npc/blunpc4");


   if( !arg )                      return 0;
//   if( !ob = present(arg,me) )     return 0;
//   if( ob != this_object() )       return 0;
   if (me->query_temp("head") != 9)
        return notify_fail("����ô�õ���һ֧���Ƶģ�\n");
   if(me->query("combat_exp") < 650000)
        return notify_fail("������ս��������ô�ٵ�С��ͷ��Ҳ��Ҫ�����������\n");
    ob=find_player(arg);
    if(!ob) ob=find_living(arg);
    if (!ob) ob=LOGIN_D->find_body(arg);
    if(!ob)
      return notify_fail("����׷ɱ���˲�������Ŷ???\n");
    if(ob==me)
      return notify_fail("����׷ɱ�Լ�ѽ!!!��û�и��ѽ???\n");
     if(ob->query("title") != HIR"ɱ��ȫ��׷ɱ����ͷ"NOR)
      return notify_fail("����С��ɫ�������鲻���������\n");

    if (!me->query("use_blue") )
        me->set("use_blue",1);
    else
        me->add("use_blue",1);
    obn=ob->query("name");
    //��ֹʹ��˲���ƶ�
    ob->set_temp("no_transmit",1);  
    message_vision(HIM"$Nʹ�������ɱ��,Ҫ��������׷ɱ$n\n",me,ob);
    //֤��������ʹ�ù������ɱ��
    me->set_temp("head",10);
    message("system",HIW "�������鳤��С��ǧ�ﴫ������\n
                ��������������ɱ�����֣�ȫ��׷ɱ" +ob->name()+"����������!!��\n\n "NOR,users());
    if (me->query("use_blue") > 4)
    {
            message("system",HIW "�������鳤��С��ǧ�ﴫ������\n����������" 
        +me->name()+"��"+me->query("use_blue")+"�������ǳ�����\n\n "NOR,users());
    }   
     ob4->move(environment(ob));
     ob3->move(environment(ob));
     ob2->move(environment(ob));
     ob1->move(environment(ob));
     message_vision(
             HIM"ͻȻ֮���ĵ���Ӱ���ķ������������ɱ�ֳ������\n"NOR,ob);
     message_vision(
             HIM"����ɱ�ֺȵ���"+ob->name()+" ������ڵ���!!\n"NOR,ob,ob);

     ob4->kill_ob(ob);
     ob3->kill_ob(ob);
     ob2->kill_ob(ob);
    // ob1->kill_ob(ob);  ��Ϊ�������ñ���
     ob4->set_leader(ob);
     ob3->set_leader(ob);
     ob2->set_leader(ob);
     ob1->set_leader(ob);
     add_amount(-1);
     return 1;
}



//��һ�汾��ֻ�Ǽ������ʽ֮�գ�����Ļػ�����ܶ���ʱ�ķ�Ӧ
//������û���޸��κ���ֵ
#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
string do_givewhip();
string do_givebook();
string do_rain();
string poison();
int accept_object(object me,object ob,object who)
{
  object ob2;
  if (me->query_temp("rain_2") != 1)
  {
    command ("say �񾭲��������������\n");
    destruct(ob);
    return 0;
  }
  if(ob->query("id") == "rou_letter" && me->query_temp("gived") != 1) 
  {
    destruct(ob);
    message_vision(" ׯ���Ὣ�������������Ų𿪣���ϸ��\��\n",me);
    message_vision(" һ��ʼ�����ŭ�ݣ����𽥵�Ц�ݽ���������\n",me);
    message_vision(" �����ź�ׯ����ܿ��ģ�\n",me);
    command("say С���ѣ�����ã��㽫��һ���Ŵ���������\n");
    ob2=new("/open/killer/obj/low_let.c");
    ob2->move(me);
    me->set_temp("gived",1);  //��ֹ�ظ���ȡ
    me->set_temp("rain_3",1);
    return 1;
  }
  if(me->query_temp("god") == 1 && ob->query("id") == "god dagger")
  {
    destruct(ob);
    message_vision(" ׯ���Ὣ����ذ������������ϸ�ۿ���ذ�ף��ƺ�������ʲô\n",me);
    message_vision(" ��Ȼ����������������\��ׯ����ع���ȥ������\n",me);
    message_vision(" ����һ������ع�����˵��\n",me);
    command("say ��ʱ�治����˼���������㣬������ħ����󷨣���ȥ�ɣ�");
    ob2=new("/open/killer/obj/evilgod.c");
    ob2->move(me);
  }
  return 0;
}

void create()
{
        set_name("ׯ����",({"master low","low"}));
        set("long","�����������������ŷ�ɥ����ڤ��ħ�̽�����ׯ���ᡱ������һ����������������Ϊ�˿���ʮ��������\n");
        set("gender","Ů��");
        set("class","poisoner");
        set("nickname", HIR "��������" NOR);
        set("combat_exp",3000000);
        set("attitude","heroism");
        set("age",26);
        set("str", 44);
        set("cor", 24);
        set("cps", 18);
        set("per", 24);
        set("int", 48);
        set("force",10000);
        set("max_kee",10000);
        set("kee", 10000);
	set("max_gin",10000);
	set("gin",10000);
	set("sen",10000);
	set("max_sen",10000);
        set("bellicosity",1500);
        set("chat_chance_combat",80);
        set("chat_msg_combat",({
         (: poison :),
         (: perform_action("poison.five") :),
         (: perform_action("poison.firefinger") :),
        }));
        set("functions/firefinger/level",100);
	set("functions/five/level",100);
        set_skill("literate",30);
        set("max_force",10000);
	set("env/cure_poison","dark");
        set_skill("move",120);
        set_skill("force",60);
        set_skill("dodge",120);
        set_skill("parry",50);
        set_skill("poison",120);
        set_skill("whip",100);
        set_skill("poisonforce",100);
        map_skill("force","poisonforce");
        set("force_factor",20);
        set_skill("coldpoison",100);
        set_skill("nine-steps",120);
        map_skill("dodge","nine-steps");
        map_skill("move","nine-steps");
        map_skill("poison","coldpoison");
        set_skill("ming-snake",100);
        map_skill("whip","ming-snake");
        set("inquiry",([
        "��ʯ"   : "���Ǳ����ڱ�֮һ��ƽ���ղ����󻤷��ǣ����������ԡ��ˡ�",
        "����"   : "��������Ǳ��̡���ͽ����Ϊ��",
        "��ͽ"   : "Ŀǰ�����������������ķÿͿ��������⡣",
        "basewhip" : (: do_givewhip :),
        "��ħ�����" : (: do_rain :),
        "basebook" : (: do_givebook :),
        "�����"   : "����Ϊ����˭ѽ! ���Ҹ���Ҫ���ơ�",
        ]));
        setup();
        create_family("ڤ��ħ��",3,"����");
carry_object("open/poison/obj/circle.c")->wear();
carry_object(POISON_OBJ"bleed_whip")->wield();
carry_object("open/poison/obj/godcloth.c")->wear();
carry_object("open/poison/obj/cape.c")->wear();
carry_object("open/poison/obj/feather.c")->wear();
carry_object("/obj/poison/rose_poison")->set_amount(70);
carry_object("/obj/poison/five_poison")->set_amount(70);
carry_object("/obj/poison/dark_poison")->set_amount(70);
carry_object("/obj/poison/faint_poison")->set_amount(70);
}
string poison()
{
        command("perform poison.faint");
        return "\n";

}

void init()
{
        add_action("do_join","join");
        add_action("do_say","swear");
}
int do_join()
{
        object me=this_player();
        if(!me->query_temp("poison_pass2")){
                command("say �㻹ûͨ�������ʽ�أ�");
                command("say ����ͨ�������ɡ�");
                return 1;
               }
        else {
                command("smile");
                command("say �ܺã���Ȼ���������λ���ϵ�ͬ�⡣");
                command("say ������ڴ�����(swear)��̡�");
                me->set_temp("master_temp",1);
                say(HIC"��ͯ˵������ʩ�����ġ�����ħ�̡��������ʽ��\n"NOR);
                return 1;
            }
}
int do_say(string str)
{
        object me = this_player();
        object book = new("/open/poison/obj/pbasebook");
        if(me->query_temp("master_temp")){
           if(str == "����ħ��"){
                me->set("poison_low",1);
            if(!((me->query("class")=="poisoner")&&(!(me->query("family/family_name"))||(me->query("family/family_name")=="ڤ��ħ��"))))
                {
                command("shout $HIR$������Ͷ���ҽ̣�Ч�������ˡ�");
                }
           else {
                command("shout $HIR$��ڤ��ħ�������½�ͽ$HIG$"+me->query("name")+"\n");
                command("shout $HIR$��������ħ�̸������ֵ�ʱ���ˡ�\n");
                command("poisoner $HIG$������һ��ӭ���ǵ��½�ͽ$HIR$"+me->query("name")+"$HIG$�ɡ�\n");
                }
                say(HIC"��Ů˵������ӭ����ħ�̣�����Ҫ��ӽ���Ŷ��\n"NOR);
                command("say ���Ǳ��������鼮����ú��ж��ɡ�");
                book->move(me);
                me->delete_temp("master_temp");
                return 1;
              }
          else {
            message_vision(sprintf(HIC"$N����˵����"+str+"\n"NOR),me);
            command("say ��˵ʲôѽ��û����͹���ȥ��");
            me->delete_temp("master_temp");
            return 1;
           }
    message_vision(sprintf(HIC"$N����˵����"+str+"\n"),me);
    command("say ����ͬ�����㷢����");
    return 1;
}
}
void heart_beat()
{
	object ob=this_object();
	int i;

        if( !ob->is_fighting() && ob->query_condition() )
	{
	for(i=0;i<5;i++)
	{
	switch(i)
	{
	  case 0:
	  if(ob->query_condition("snake_poison"))
	  {
	  ob->set("env/cure_poison","snake");
	  command("exert depoison");
	  }
	  break;

	  case 1:
	  if(ob->query_condition("dark_poison"))
	  {
	  set("env/cure_poison","dark");
	  command("exert depoison");
	  }
	  break;

	  case 2:
	  if(ob->query_condition("rose_poison"))
	  {
	  set("env/cure_poison","rose");
	  command("exert depoison");
	  }
	  break;

	  case 3:
	  if(ob->query_condition("five_poison"))
	  {
	  set("env/cure_poison","five");
	  command("exert depoison");
	  }
	  break;

	  case 4:
	  if(ob->query_condition("fire_poison"))
	  {
	  set("env/cure_poison","firefinger");
	  command("exert depoison");
	  }
	  break;
	}
	}
        }
        ::heart_beat();
}

void attempt_apprentice(object ob)
{
        if(this_player()->query("class")!="poisoner")
        {
                command("say �㲻������ħ�̵��ˣ����߰� !\n");
                return;
        }
        if(!this_player()->query("poison_low"))
        {
                command("say ��Ȼ����ħ��һԱ������δ���ҽ̡�\n");
                command("say ������Ҳ���㴫���κμ��ܣ�����ذɡ�\n");
                return;
        }
        command("smile");
          command("recruit "+ob->query("id"));
}
string do_givebook()
{
  object me = this_player();
  object book = new("/open/poison/obj/pbasebook");
  if(me->query("poison_low")){
        book->move(me);
        command("smile");
        return "��ͺú��ж��Ȿ�顣\n";
        }
  return "�㲢δ����ڤ��ħ�̣�����Ҫ��ѽ����!\n";
}

string do_givewhip()
{
  object me = this_player();
  object whip = new("/open/poison/obj/mo-whip");
   if(me->query("poison_low")){
        whip->move(me);
        command("smile");
        return "����Ӿ���������ã���쳤��Ŷ��\n";
        }
   return "û��̵ı���Ҫ���ӣ��߰�!\n";
}

string do_rain()
{
  object me = this_player();

   if(me->query_temp("rain_0") == 1)
   {
        command("sm");
        me->set_temp("rain_1",1);
        return "���밤�����𣿹���ȥ���Ҳ���̸�Ǹ����ڵ���ˮ�������˵�����\n";
   }
   command("sm "+me->query("id"));
   return "�ߣ���֪��\n";
}

void die()                                                                 
{    
	object winner = query_temp("last_damage_from");
	int j;
        if(!winner)
	{
	::die();
	return ;
        }
        tell_object(users(),
"\n\t"YEL"ڤ��ħ�̵ķ�λͻȻ����һ��˻���ѵص�ŭ����!!
\n\t"YEL"�ò�����ѽ!!   ��"HIM"ׯ����"NOR+YEL"��Ȼ��������һ��"HIY+winner->query("name")+NOR+YEL"���򲻹�!!
\n\n\t"HIR"��ħ�����е���ͽ�ǰ�!!    �뾡���ȥʹ����!!
\n\t"HIR"������ս��µ���֮����!!    ���Ǵ�Ⱦ���ʺ�!!"HIR"
\n\t������������������ħ����ǰ���е���������!!\n\n"NOR);
	if ( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {      
	  new("/open/sky/obj1/magic_emblem")->move(environment(winner));
	  message_vision(HIM"\n��ׯ��������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/magic_emblem",sprintf("%s(%s) ��ׯ��������˻�֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj1/magic_emblem")->move(environment(winner));
	  message_vision(HIM"\n��ׯ��������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/magic_emblem",sprintf("%s(%s) ��ׯ��������˻�֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}
//��һ�汾��ֻ�Ǽ������ʽ֮�գ�����Ļػ�����ܶ���ʱ�ķ�Ӧ
//������û���޸��κ���ֵ
#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
string do_givewhip();
string do_givebook();
string do_rain();

int accept_object (object me,object ob)
{
  object ob2;

  if (me->query_temp("rain_2") != 1)
  {
    command ("say �񾭲��������������\n");
    return 0;
  }
  if(ob->query("id") != "rou_letter" || me->query_temp("gived") == 1) 
    return 0;
  message_vision(" ׯ���Ὣ�������������Ų𿪣���ϸ�Ķ�\n",me);
  message_vision(" һ��ʼ�����ŭ�ݣ����𽥵�Ц�ݽ���������\n",me);
  message_vision(" �����ź�ׯ����ܿ��ģ�\n",me);
  command("say С���ѣ�����ã��㽫��һ���Ŵ���������\n");
  ob2=new("/open/killer/obj/low_let.c");
  ob2->move(me);
  me->set_temp("gived",1);  //��ֹ�ظ���ȡ
  me->set_temp("rain_3",1);
  return 1;
}

void create()
{
        set_name("ׯ����",({"master low","low"}));
        set("long","�����������������ŷ�ɥ����ڤ��ħ�̽�����ׯ���ᡱ������һ����������������Ϊ�˿���ʮ��������\n");
        set("gender","Ů��");
        set("class","poisoner");
        set("nickname", HIR "��������" NOR);
        set("combat_exp",1000000);
        set("attitude","heroism");
        set("age",26);
        set("str", 44);
        set("cor", 24);
        set("cps", 18);
        set("per", 24);
        set("int", 48);
        set("force",800);
set("functions/firefinger/level",30);
        set_skill("literate",80);
        set("max_force",800);
        set_skill("move",100);
set_skill("force",50);
        set_skill("dodge",100);
        set_skill("parry",60);
        set_skill("poison",100);
        set_skill("unarmed",40);
        set_skill("whip",60);
        set_skill("poisonforce",60);
        map_skill("force","poisonforce");
        set("force_factor",10);
        set_skill("coldpoison",100);
        set_skill("nine-steps",120);
        map_skill("dodge","nine-steps");
        set("chat_chance_combat",60);
        set("chat_msg_combat",({
(: perform_action,"poison.five" :),
(: perform_action,"poison.firefinger" :),
(: perform_action,"poison.faint" :),
        }));
        map_skill("move","nine-steps");
        map_skill("poison","coldpoison");
        set_skill("ming-snake",80);
        map_skill("whip","ming-snake");
        set("inquiry",([
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
        carry_object("/obj/poison/rose_poison")->set_amount(30);
        carry_object("/obj/poison/five_poison")->set_amount(30);
        carry_object("/obj/poison/dark_poison")->set_amount(30);
carry_object("/obj/poison/faint_poison")->set_amount(30);
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

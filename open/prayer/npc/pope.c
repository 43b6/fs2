#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;

string do_tengin();
string magic_manor1();
string magic_manor2();
string magic_manor3();

void create()
{
        set_name("�ֺ���",({"pope lin","pope","lin"}));
        set("long",@LONG

        û����֪������������Ҳû��֪�������书�ж����һ������Ī
        ������������ǰ����Ƽʻᣬʹ�������ˡ�ʥ��̡���Ҳ��֪
        �����úη�����������Ӵ����֯��Ҳ��Ϊ���, ���������ϵ���
        ��Ϊ�������񻰡���

LONG);
        set("gender","����");
        set("clan_kill",1);
        set("class","prayer");
        set("nickname","������");
        set("title","ʥ��̻ʡ���");
        set("combat_exp",7000000);
        set("attitude","heroism");
        set("score",1000000);
        set("age",75);
        set("max_kee",15000);
        set("str", 50);
        set("cor", 50);
        set("cps", 45);
        set("int", 42);
        set("marks/tengin",1);
        set("force",50000);
        set("max_force",50000);
        set("force_factor", 40);
        set("max_gin",10000);
        set("max_sen",10000);
        set_skill("cure", 120);
        set_skill("superforce", 250);
        set_skill("dodge", 120);
        set_skill("force",150);
        set_skill("move", 120);
        set_skill("literate",120);
        set_skill("parry", 120);
        set_skill("array",130);
        set_skill("fire-array",130);
        set_skill("unarmed",120);
        set_skill("canon",150);
        set_skill("literate",120);
        set_skill("shift-steps",150);
        set_skill("universe",140);
        map_skill("force","superforce");
        map_skill("dodge","shift-steps");
        map_skill("move","shift-steps");
        map_skill("parry","universe");
        map_skill("array","fire-array");
        map_skill("unarmed","universe");
        set("functions/blood/level",200);
        set("functions/tengin/level",100);
        set("functions/bluesea/level",120);
        set("inquiry",([
        "�쾪�ض�"      :       (: do_tengin :),
        "������"        :       (: magic_manor1 :),
        "����ɽׯ"      :       (: magic_manor2 :),
        "������"        :       (: magic_manor3 :),
        ]));
        set("chat_chance", 1);
        set("chat_msg", ({
                CYN"�̻�����������������������������ʯ�˲�����\n
                        �쳾���»Ӳ�����������Ц�ǳ��ˡ���\n"NOR,
                CYN"�̻�Ц����������ԡѪ��־�ߣ�������ı���мƣ�\n
                        һ�ں俪�չص���������˧Խ��ӡ���\n"NOR,
                CYN"�̻�̾�����������۱�����磬ǧ�ﶨ�������壻\n
                        ��������ǹ��ڣ��ٴ�����˭�빲����\n"NOR,
                CYN"�̻��ֵ������������¿ջ��һƬ����ˮ�¼䣻\n
                        ������ɽ���ܴ����糤�������ɹء���\n"NOR,
                CYN"�̻ʱ�������������ʱ�����У����²���ǿ��\n
                        ʱ���˾͵������첻�Ṽ�������˰�����\n"NOR,
                CYN"�̻��������ҹ������ǧɽ�£�·ң����ǧ�ֻ���\n
                        ��ղ�֪�˻������������οͶ��ҡ���\n"NOR,
                CYN"�̻�������������������Ŷ��죬��ѧ���������ꣻ\n
                        ˭����Խһ�߽磬�ݹ������������\n"NOR,
                CYN"�̻�˵���������½������ɾ��������ַ�ȡ���飻\n
                        ��Ҫ��ǿ����Ȱ��������������������\n"NOR,
        }) );
                set("chat_chance_combat",50);
                set("chat_msg_combat", ({
                (: perform_action, "force.blood3" :),
                (: perform_action, "force.bluesea3" :),
        }));
        setup();

        add_money("cash",20);
        carry_object("/open/prayer/obj/boris-boots")->wear();
        carry_object("/open/prayer/obj/boris-cloth")->wear();
        carry_object("/open/prayer/obj/boris-hat")->wear();
        carry_object("/open/prayer/obj/boris-hands")->wear();
        carry_object("/open/prayer/obj/kylin-belt")->wear();
        carry_object("/open/prayer/obj/dragon-icer")->wield();
        create_family("ʥ���",1,"�̻�");
        carry_object("open/prayer/obj/lin-head");

}

void init()
{
        add_action("do_join","join");
        add_action("do_select","select");
        add_action("do_verify","verify");
}

int accept_fight(object who)
{
return notify_fail("�̻�����ĵ� : ȥ.ȥ..ȥ...�������ҡ�\n");
}
int do_verify(string arg)
{
object me,ob,ob1;
me=this_player();
ob=new("open/prayer/obj/woodboard");
ob1=new("open/prayer/obj/ironboard");
if( arg!="board")
  {
    write("��Ҫ����ʲô\n");
    return 1;
   }
if(me->query("family/family_name")!="ʥ���")
  {
    write("ֻ��ʥ���ͽ�Ż�������\n");
    return 1;
  }

 if( present("wood board",me) || present("iron board",me) )
  {
    write("���Ѿ��������\n");
    return 1;
  }

 if ( me->query("marks/�����Ǿ�") )
    {
    write("����ʥ��̸ɲ���ר������!!�ɲ�Ҫ����!!\n");
    ob1->move(me);
      return 1;
    }
    else
    {
    write("����ʥ��̵����� ,����úñ��� ,������ʧ��\n");
    ob->move(me);
  return 1;
  }
}

void attempt_apprentice(object ob)
{
    if(ob->query("marks/ʥ�������")==1)
    {
      if(ob->query("combat_exp")<=200000)
      {
        command("? " +ob ->query("id"));
        command("say �㲻�ǰݹ������ŵ���������?");
        command("say ����ĳ̶Ȼ������ʸ����ѧϰ��ѧ�����Ĵ����!");
        command("say �úø������Լ���ʦ����ѧ�����!");
        return 0;
      }
      else
      {
        command("look "+ob->query("id"));
        command("pat");
        command("say ��,���Ȼ�ǿ���֮��,�����ȥ����λ������Ϊ����ѧ��ָ��!");
        ob->delete("family");
        command("say ����ѡ��(select)��һλ������?");
        command("say ��������(gonfu_elder)��ִ������(lawyer_elder)���ǽ��ɳ���(behavior_elder)��");
        ob->set_temp("allow_select",1);
      }
    }
    if(ob->query("marks/ʥ��������")==1)
    {
      if(ob->query("combat_exp")<=900000)
      {
        command("? " +ob ->query("id"));
        command("say �㲻���Ѿ��ݹ���λ������Ϊ��ʦ����?");
        command("say ����ĳ̶�������Ŀǰ�������ʸ����ѧϰ��ѧ�����Ĵ����!");
        command("say �úø��ų������ٶ�ѧ�����!");
        return 0;
      }
      else
      {
        command("look "+ob->query("id"));
        command("pat");
        command("say ��,���Ȼ���Ƿ���֮��,�����ȥ�ҽ��ڵ������Ǿ���Ϊ����ѧ��ָ��!");
        ob->delete("family");
        command("say �����ѡ�����Ǿ�(warrior)�������Ǿ�(literate)");
        ob->set_temp("allow_select",1);
      }
    }
    if(ob->query("marks/�����Ǿ�")==1)
    {
      if(ob->query("combat_exp")<=2500000)
      {
        command("? " +ob ->query("id"));
        command("say �㲻���Ѿ��������Ǿ������ҵ�������?");
        command("say ����ĳ̶Ȼ������ʸ����ѧϰ��ѧ�����Ĵ����!");
        command("say �úø��������Ǿ���ĥ��ĥ����!");
        return 0;
      }
      else
      {
        command("look "+ob->query("id"));
        command("pat");
        command("say ��,���Ȼ�ǿ���֮��,�ӽ����ɱ��������Խ̵�!");
        ob->delete("family");
        command("recruit "+ob->query("id"));
        ob->set("title","[31mʥ��̵մ�����[0m");
        message("mud","[36mʥ��̻ʡ����ֺ���������Ц: \n
        ��������....������ʵ��̫����������\n
        [5m[33m"+ob->name()+"[0m[36m���ʥ��̵��ص���������ļ����ˣ�\n
                        �úøɰ�!!�Ϸ򲻻�������!![0m\n",users());
        return ;
      }
    }
    command("hmm");
    command("say �ҽ���æ ,��ȥ��ʥ������ŵ������� !");
    command("say �������(select)��һ����?");
    command("say �����ѡ�������(tangi)��������(tanshu)����Ȩ��(tanchun)");
    command("say �����ѡ�������(tanshun)�������(uhen)��������(kiyan)");
    command("say �����ѡ��������(youkoun)��������(zhenche)");
    ob->set_temp("allow_select",1);
}

int do_join()
        {
        if(this_player()->query("class"))
                return notify_fail("���Ѿ��������������ˡ�\n");
        if(this_player()->query("officer_class"))
                return notify_fail("�̻������˵����������ԭ���������ˣ���ʥ��̲���ӭ��!!\n");
        this_player()->set("class","prayer");
        message("mud","\n[33mʥ��̻ʡ����ֺ��� : ��.��..��...\n
��λʥ��̵ĵ����ǣ�\n
�����ǻ�ӭ[32m" +this_player()->name()+"[33m������[31mʥ���[33m!![0m\n\n",users());
        return 1;
}
int do_select(string str)
{
    object who;
    who=this_player();
    if(!who->query_temp("allow_select"))
    {
      command("say ����û��Ӧ������? ");
      return 1;
    }
    if(who->query_temp("have_say")==1)
    {
      message_vision(sprintf(HIC"$N˵����"+str+"\n"NOR),who);
      command("say �㲻��������?");
      return 1;
    }
    if(str=="�����" ||  str == "tangi")
    {
       message_vision(HIC"$N˵���������\n"NOR,who);
       who->set_temp("allow_1",1);
       command("smile");
       command("say �� ,���ȥ��������Ű�!");
       who->set_temp("have_say",1);
       return 1;
    }
    if(str == "������" || str == "tanshu")
    {
      message_vision(HIC"$N˵����������\n"NOR,who);
      who->set_temp("allow_2",1);
      command("smile");
      command("say �� ,��ͼ��������Ű�!");
      who->set_temp("have_say",1);
      return 1;
    }
    if(str == "��Ȩ��" || str == "tanchun")
    {
       message_vision(HIC"$N˵������Ȩ��\n"NOR,who);
       who->set_temp("allow_3",1);
       command("smile");
       command("say �� ,��ͽ�ȥ��Ȩ��������!");
       who->set_temp("have_say",1);
       return 1;
    }
    if(str == "�����" || str == "tanshun")
    {
       message_vision(HIC"$N˵���������\n"NOR,who);
       who->set_temp("allow_4",1);
       command("smile");
       command("say �� ,��͵�����źú�ĥ����!");
       who->set_temp("have_say",1);
       return 1;
    }
    if(str == "�����" || str == "uhen")
    {
       message_vision(HIC"$N˵���������\n"NOR,who);
       who->set_temp("allow_5",1);
       command("smile");
       command("say �� ,��ͼ�������Ű�!");
       who->set_temp("have_say",1);
       return 1;
    }
    if(str == "������" || str == "kiyan")
    {
       message_vision(HIC"$N˵����������\n",who);
       who->set_temp("allow_6",1);
       command("smile");
       command("say �� ,���ǰ��������ѧϰ��!");
       who->set_temp("have_say",1);
       return 1;
    }
    if(str == "������" || str == "youkoun")
    {
      message_vision(HIC"$N˵����������\n"NOR,who);
      if(who->query("gender") != "Ů��")
        command("say �㲻��Ů��, �����ſ��²��������! ��ѡһ����!");
      else
      {
        who->set_temp("allow_7",1);
        command("smile");
        command("say �� ,���ǰȥ�����Ű�ʦѧ�հ�!");
        who->set_temp("have_say",1);
      }
      return 1;
    }
    if(str == "������" || str == "zhenche")
    {
       message_vision(HIC"$N˵����������\n"NOR,who);
       who->set_temp("allow_8",1);
       command("smile");
       command("say �� ,���ǰȥ�����Ű�ʦѧ�հ�!");
       who->set_temp("have_say",1);
       return 1;
    }
    if(str == "��������" || str == "gonfu" || str == "gonfu_elder")
    {
       if(who->query("combat_exp") < 200000){
         command("say ����һﾭ�鲻�㣬ȥ�����Ŷ�ѧ�㶫����!!");
         return 1;
       }
       if(!who->query("marks/ʥ�������")){
         command("say �������Ŷ�ûȥ��������ȥ������ѧϰ??����г�������!!");
         return 1;
       }
       message_vision(HIC"$N˵������������\n"NOR,who);
       who->set_temp("allow_9",1);
       command("smile");
       command("say �� ,���ȥ���������Ƕ�ѧ�հ�!");
       who->set_temp("have_say",1);
       return 1;
    }
    if(str == "ִ������" || str == "lawyer" || str == "lawyer_elder")
    {
       if(who->query("combat_exp") < 200000){
         command("say ����һﾭ�鲻�㣬ȥ�����Ŷ�ѧ�㶫����!!");
         return 1;
       }
       if(!who->query("marks/ʥ�������")){
         command("say �������Ŷ�ûȥ��������ȥ������ѧϰ??����г�������!!");
         return 1;
       }
       message_vision(HIC"$N˵����ִ������\n"NOR,who);
       who->set_temp("allow_10",1);
       command("smile");
       command("say �� ,���ȥִ�������Ƕ�ѧ�հ�!");
       who->set_temp("have_say",1);
       return 1;
    }
    if(str == "���ɳ���" || str == "behavior" || str == "behavior_elder")
    {
       if(who->query("combat_exp") < 200000){
         command("say ����һﾭ�鲻�㣬ȥ�����Ŷ�ѧ�㶫����!!");
         return 1;
       }
       if(!who->query("marks/ʥ�������")){
         command("say �������Ŷ�ûȥ��������ȥ������ѧϰ??����г�������!!");
         return 1;
       }
       message_vision(HIC"$N˵�������ɳ���\n"NOR,who);
       who->set_temp("allow_11",1);
       command("smile");
       command("say �� ,���ȥ���ɳ����Ƕ�ѧ�հ�!");
       who->set_temp("have_say",1);
       return 1;
    }
    if(str == "���Ǿ�" || str == "warrior")
    {
       if(who->query("combat_exp") < 900000){
         command("say ����һﾭ�鲻�㣬ȥ������ѧ�㶫����!!");
         return 1;
       }
       if(!who->query("marks/ʥ��������")){
         command("say �������Ƕ�ûȥ��������ȥ�����Ǿ���ѧϰ??����г�������!!");
         return 1;
       }
       message_vision(HIC"$N˵�������Ǿ�\n"NOR,who);
       who->set_temp("allow_12",1);
       command("smile");
       command("say �� ,���ȥ���Ǿ��Ƕ�ѧ�հ�!");
       who->set_temp("have_say",1);
       return 1;
    }
    if(str == "���Ǿ�" || str == "literate")
    {
       if(who->query("combat_exp") < 900000){
         command("say ����һﾭ�鲻�㣬ȥ������ѧ�㶫����!!");
         return 1;
       }
       if(!who->query("marks/ʥ��������")){
         command("say �������Ƕ�ûȥ��������ȥ�����Ǿ���ѧϰ??����г�������!!");
         return 1;
       }
       message_vision(HIC"$N˵�������Ǿ�\n"NOR,who);
       who->set_temp("allow_13",1);
       command("smile");
       command("say �� ,���ȥ���Ǿ��Ƕ�ѧ�հ�!");
       who->set_temp("have_say",1);
       return 1;
    }
    command("say û����!");
    return 1;
}

int accept_kill(object ob)
{
        int i;
        object ob1, hu_fa;
        ob1 = this_object();
        ob = this_player();
        command("exert blood");
        if( !present("hu-fa", environment(ob1)) ) {
        tell_room(environment(ob1),HIW"\nͻȻ�������λ����!!\n\n"NOR);
        for(i=0;i<2;i++)
        {
        hu_fa = new("/open/prayer/npc/hu_fa");
        hu_fa->move(environment(ob1));
        hu_fa->kill_ob(ob);
        }}
        write("����������˹����е�������������������\n");
        write("�ֺ�������ɱ����˵��������֪С��!!������!!!��\n");
        kill_ob(ob);
        command("perform unarmed.tengin");
        return 1;
}

void greeting(object ob)
{
        ob=this_player();
        if ( ob->query_skill("coldpoison",1) )
        {
        command("say ������һ���������䣡����ʹ��ѧ�ж���֮�ˣ���");
        kill_ob(ob);
        }
        if( ob->query("class")=="dancer")
        {
        command("say �����������Щ������ɫ֮�ˣ���");
        kill_ob(ob);
        }
    return;
}

void die()
{
        object winner=query_temp("last_damage_from");
        string name1;
        int j;
        if(!winner)
        {
        ::die();
        return ;
        }
        name1 = winner->query("name");

        // by ACKY
        if( winner->query("clan/id") && userp(winner) )
                CLAN_D->add_clanset( winner->query("clan/id"), "develop" , 5 );

        tell_object(users(),HIR"
   Զ��������һ��ŭ��!!��ʥ��������ֺ�����������!!ǿ����������,ʹ����
                    "+HIW+"����Ǭ�������߾�
                                   ��"+HIC+"��"+HIG+"��"+YEL+"��"+BLU+"��"+HIW+"��"HIW"
   һʱ֮�䣬��ر�ɫ!!���ŭХ!!�����������ŵ���������ӿ���ֺ���֮����!!!
"HIR"��Ȼ��!!��~~һ������!!!�ֺ����޷���Ԧ���ϵľ�������!!�����������!!Ѫ��ģ��!!

    "+HIC+"����"+HIY+name1+HIC+"����Ц����ʥ��������Ծ�!!������ҳưԵ�ʱ����!!����!!\n"NOR);
        if(winner->query("family/family_name")=="�ɽ���" && winner->query("killyao")==1 && winner->query("bloodsword")==1)
        {
        object ob;
        ob=new("/open/gsword/obj1/eyes.c");
        tell_object(winner,HIR"����ֺ�����ʬ�����ڳ���һ���۾�..\n"NOR);
        winner->set_temp("swordeyes",1);
        ob->move(winner);
        }
        if ( winner->query_temp("bless")==1 )
        {
        j=random(6000);
          if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
          {
          new("/log/sky/emperor_stone")->move(environment(winner));
          message_vision(HIM"\n���ֺ��������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/emperor_stone",sprintf("%s(%s) ���ֺ��������˻���ʯ�� %s\n",
          winner->name(1),winner->query("id"),ctime(time())));
          }
        }else{
        j=random(12000);
          if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 )
          {
          new("/log/sky/emperor_stone")->move(environment(winner));
          message_vision(HIM"\n���ֺ��������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/emperor_stone",sprintf("%s(%s) ���ֺ��������˻���ʯ�� %s\n",
          winner->name(1),winner->query("id"),ctime(time())));
          }
        }
        ::die();
}

void heart_beat()
{
 object me=this_object();
 if(random(100) < 20 && is_fighting()) {
   command("perform unarmed.tengin");
   me->delete_busy();
   me->clear_condition();
 }
 if( random(100) < 10)
 {
  if( is_fighting() )
  {
   if( query("kee") < query("max_kee") )
    message_vision(HIR"\n�ֺ����������ķ�֮���ľ������ϵ��˿��漣ʽ������\n"NOR,me);
    me->receive_heal("kee",1000);
    me->receive_heal("gin",200);
    me->receive_heal("sen",200);
    me->delete_busy();
    me->clear_condition();
  }
 }
        ::heart_beat();
}

string do_tengin()
{
object who=this_player();
if(who->query("class")=="prayer")
{
if(who->query("combat_exp") > 3500000 )
{
if(who->query("marks/tengin") != 1 )
{
command("say �㽭�������ѹ�����Ϊ�ҵմ����ӡ�");
command("say �ðɣ��Ҵ��㡮�쾪�ض�����");
who->set("marks/tengin",1);
return ":)";
} else {
command("say ���Ѵ����ˣ��ú����ðɣ�");
return ":)";
}} else {
command("say �㽭����������� 350 �������ɣ�");
return ":)";
}
} else {
command("say �Ҳ�֪����");
return ":)";
}
}

string magic_manor1()
{
        object me;
        me=this_player();
        if(!present("magic sign",me) && me->query("quests/can_go_magic-manor"))
        {
        command("say ��ô��Ҫ�Ķ�������ôŪ����!!");
        command("say �Һ��ⶫ�������Ҵ���ʹ�÷��������޷�ʹ�õģ�������һ������ɡ�");
        new("/open/magic-manor/obj/magic-sign")->move(this_player());
        return "�´μǵ�С��Щ������Ū����!!";
        }

        if(present("magic sign",me) && me->query("quests/can_go_magic-manor"))
        {
        command("say �������Ѿ������ˣ��ú�ʹ�ðɣ���Ī��ʧ�ˡ�");
        return "����ɽׯ�����λ�þ��ڷ����򶫷���Զ���������ڡ�\n";
        }

        else if( me->query_temp("quests/magic-maonr-02") > 2 )
        {
        return "�Ȱ��ҽ�����������ɰ�!!";
        }

        else if( me->query_temp("quests/magic-maonr-02") && me->query_temp("quests/magic-maonr-02") <= 2 )
        {
        return "������֪���Ĳ����ˣ�������Ҳ���ǵģ�˵��ô����ʲô ...@#$Q%";
        }

        else
        {
        return "�޶˶˵���������ʲô�������!!\n";
        }
}

string magic_manor2()
{
        object me;
        me=this_player();

        if( me->query("quests/can_go_magic-manor") )
        {
        return "���ɽׯ���Ǳ仯�ô󣬺����ȥһ�˿���ѽ!!";
        }

        else if( me->query_temp("quests/magic-manor-02") == 2 )
        {
        me->set_temp("quests/magic-manor-02",3);
        return "����ɽׯ�����ڽ����ϻ������֪���������ޡ�\n"
        +"            �����㣬��Ҳ���Ǿ���ɽׯ��һ���ӡ�\n"
        +"            �������Ҫ�������ɽׯ���ҿ�������һ��֮����\n"
        +"            ����......��Ҫ��������������²��С�\n";
        }

        else
        {
        return "����ɽׯ����˵�Ǹ����صĵط�����֪����Ҳ����!!";
        }
}

string magic_manor3()
{
        object me;
        me=this_player();

        if( me->query("quests/can_go_magic-manor") )
        {
        return "���������������£���ʥ����ڽ����ĵ�λ�ָ��ӳ���ˡ�\n";
        }

        else if( me->query_temp("quests/magic-manor-02") == 3 )
        {
        command("hmm");
        call_out("three_check1",3,me);
        return "������һ�£�Ҫ������ɵ������¡�\n";
        }

        else if( me->query_temp("quests/magic-manor-02") && me->query_temp("quests/magic-manor-02") < 3 )
        {
        return "�ٺ٣���Ľ���Ҳδ��̫���˰�!!\n";
        }

        else
        {
        return "ʲô������ѽ����������!!\n";
        }
}

int three_check1()
{
        object me,ob;

        me=this_player();
        ob=this_object();

        if( me->query_temp("quests/magic-manor-02") == 3 && !me->query("quests/can_go_magic-manor") )
        {
        command("say ���ˣ��������!!");
        command("say ��һ�����飺��˵����ɽ��һ��ǧ�������������������һƬ��Ҷ��");
        command("say �����ķ����ǳ����������Ҷ����������¡�");
        command("say �����õ��ˣ����ٸ�����ڶ��������!!");
        me->set_temp("quests/magic-manor-02",4);
        }else{
        command("say ��!!");
        }
        return 1;
}

int three_check2()
{
        object me,ob;

        me=this_player();
        ob=this_object();

        if( me->query_temp("quests/magic-manor-02") == 5 && !me->query("quests/can_go_magic-manor") )
        {
        command("say ���ˣ��������!!");
        command("say �ڶ������飺��կկ����������ͷ��");
        command("say ��˵�������Բб����Ƿǲ��֣�ռ����կΪ��, ���Ĵ�����°�ӣ��޶�����");
        command("say �����õ��ˣ����ٸ���������������!!");
        me->set_temp("quests/magic-manor-02",6);
        }else{
        command("say ��!!");
        }
        return 1;
}

int three_check3()
{
        object me,ob;

        me=this_player();
        ob=this_object();

        if( me->query_temp("quests/magic-manor-02") == 7 && !me->query("quests/can_go_magic-manor") )
        {
        command("say ���ˣ��������!!");
        command("say �������һ���ˣ���Ҫһ������ħ������ͷ��");
        command("say ħ�������֮����������ܴ��������֤�����������");
        command("say �͵���ĺ���Ϣ��!!");
        me->set_temp("quests/magic-manor-02",8);
        }else{
        command("say ��!!");
        }
        return 1;
}

int magic_sign()
{
        object me,obj;

        me=this_player();

        if( me->query_temp("quests/magic-manor-02") == 9 && !me->query("quests/can_go_magic-manor") )
        {
        command("say �ҳ�����������ʵ��Ҫ����������͡�Ʒ�Ժͺ�Ⱥ�Եġ�");
        command("say ����ɽׯ����Ҫ�����������˲ģ��ҹ�����û�п����㡣");
        command("say �����������ͽ������ˣ�ʹ�õķ����ܼ򵥣�����ͽ���.......��");
        command("say �������㶮�˰ɣ�ֻҪ������ȷ��λ�ã����ͻ��������ˡ�");
        me->delete_temp("quests/magic-manor-01");
        me->delete_temp("quests/magic-manor-02");
        me->set("quests/can_go_magic-manor",1);
        obj=new("/open/magic-manor/obj/magic-sign");
        obj->move(me);
        message_vision("�����꽻��$Nһ��$n��\n",me,obj);
        command("say ���������ٴ�һ�㹦�������!!");
        command("say ϣ������Ϊ����ɽׯ�ྡһ��������");
        me->start_busy(15);
        message_vision(HIY"�ֺ�����˫������$N�ٻ�����������Ѩ��һ���ھ����ֺ�������������$N���ڡ�\n"NOR,me);
        call_out("trans_force",10,me);
        }else{
        command("say ��!!");
        }
        return 1;
}

int trans_force()
{
        object me;
        int force;
        me=this_player();
        force=me->query_skill("force",1);
        {
        message_vision(HIY"ֻ���ֺ������������Ǻ�ˮ����һ������й���ϡ�\n"NOR,me);
        tell_object(me,HIC"��ֻ��ȫ�������������ϵĽ�����Ȼ��ͨ��������������������\n"NOR);
        me->set_skill("force",force+30);
        me->delete_busy();
        }
        return 1;
}

int accept_object(object me,object ob)
{
        int om,ot;
        me=this_player();
        om=ob->query("magic-manor");
        ot=me->query_temp("quests/magic-manor-02");

        if( !ot )
        {
          if( om == 2 )
          {
          command("say �������������ѽ��������Ҳ������������!!");
          command("say ���ñ��̻�Ϊ���ֳ�����!!");
                  destruct(ob);
          kill_ob(me);
          }else{
          command("say ���̻�����æ!!   ȥ! ȥ!! ȥ!!!");
          destruct(ob);
          return 0;
          }
        }else{
          if( ot == 1 && om == 2)
          {
          command("say �ţ�����Ŵ������������������ױ���д��û��!!");
          command("say ���������쿴������ˣ�������ı��¿ɲ�С�!!");
          command("say ˵�ɣ����������ǲ��������йؾ���ɽׯ����ѽ��");
                  destruct(ob);
          me->set_temp("quests/magic-manor-02",2);
          return 1;
          }else{
            if( ot == 4 && om == 3 && me->query_temp("quests/kill-dance") == 1 )
            {
            me->set_temp("quests/magic-manor-02",5);
            me->delete_temp("quests/kill-dance");
            command("hmm");
                        destruct(ob);
            call_out("three_check2",3,me);
            return 1;
            }else{
              if( ot == 4 && om == 3 && me->query_temp("quests/kill-dance") != 1 )
              {
              command("say ����һ�������������ӣ���ƬҶ�Ӳ����������õ��İɣ�");
              destruct(ob);
              return 1;
              }else{
                if( ot == 6 && om == 4 && me->query_temp("quests/kill-snake") == 1 )
                {
                me->set_temp("quests/magic-manor-02",7);
                me->delete_temp("quests/kill-snake");
                command("hmm");
                                destruct(ob);
                call_out("three_check3",3,me);
                return 1;
                }else{
                  if( ot == 6 && om == 4 && me->query_temp("quests/kill-snake") != 1 )
                  {
                  command("say ���......���ɾ�����������ɱ���İɣ�");
                  destruct(ob);
                  return 1;
                  }else{
                    if( ot == 8 && om == 5 )
                    {
                    me->set_temp("quests/magic-manor-02",9);
                    call_out("magic_sign",1,me);
                                        destruct(ob);
                    return 1;
                    }else{
                    command("say ��������û��Ҫ������������ø�����ʲô��");
                    destruct(ob);
                    }
                  }
                }
              }
            }
          }
        }
        return 1;
}

// master_tor.c made by adam..
// refix by chan
// add quest thing by nike
#include <ansi.h>
inherit NPC;
inherit F_MASTER;

string ask_vet();
string ask_tor();
string ask_savedie();

void create()
  {
        set("class", "doctor");
        set_name("����", ({ "master tor", "master", "tor" }) );
        set("title","�����ŵ�����������");
        set("nickname",HIC "���ֻش�"NOR);
        set("gender", "����");
        set("doctor/sosman", 1);
        set("max_gin",10000);
        set("max_sen",10000);
        set("max_kee",10000);
        set("age", 55);
        set("attitude", "heroism");
        set("long",
"����Ϊһ����ҽ,�ഫ��Ϊ�ع��ι����˹�,�ɼ���ҽ���ĸ���.\n"+
"��Ϊ���������ŵ������Է���ҽ��Ϊ����,���ڻ��߾���ȫ���Ը�..\n");
        set("str",18);
        set("cps",30);
        set("per",10);
        set("int",40);
        set("kar",16);
        set("bellicosity",1500);
        set("combat_exp",3000000);
        set("force",4000);
        set("max_force", 4000);
        set("force_factor", 10);
        set("score",200000);
        set("inquiry",([
             "����������" :  "��...�˰������������˲��Ի������֮��������˵���ƴ��
�����пŸ����������㲻��ȥ������\n",
             "����֮��"     :  (: ask_tor :),
             "����֮��"     :  (: ask_savedie :),
             "����"     :  (: ask_vet :),
        ]));
        set("functions/gold-needle/level",100);
        set("functions/break-kee/level",100);
        set_skill("godcure",100);
        set_skill("spells",20);
        set_skill("magic",20);
        set_skill("cure",120);
        set_skill("force",80);
        set_skill("move",60);
        set_skill("stabber",120);
        set_skill("parry", 50);
        set_skill("dodge",70);
        set_skill("poison",70);
        set_skill("literate", 80);
        set_skill("seven-steps",100);
        set_skill("yu-needle",100);
        set_skill("shinnoforce",80);
        map_skill("force", "shinnoforce");
        map_skill("dodge", "yu-steps");
        map_skill("stabber","yu-needle");
        map_skill("cure","godcure");
        map_skill("move","seven-steps");
        map_skill("parry", "yu-needle");
        set("chat_chance_combat",65);
        set("chat_msg_combat",({
        (: perform_action("yu-needle.gold-needle") :),
        (: perform_action("yu-needle.break-kee") :),
        }));

        create_family("������", 3, "������");
        setup();
        carry_object("/open/doctor/obj/cloth.c")->wear();
        carry_object("/open/doctor/obj/needle9.c")->wield();
        add_money("gold",10);
}
void init()
{
    object me=this_player();
    add_action("do_verify","verify");
    set_heart_beat(1);
    add_action("do_say","say");
    add_action("do_answer","answer");
}
int do_answer(string arg)
{
    object me = this_player();
    object ob = this_object();
    int i = (int)me->query_temp("torask");
    
    if(i)
{
    if(!arg) return notify_fail("��Ҫ�ش�Щʲô�֣�\n");
    if((int)me->query_temp("wrong") >= 3)
    {
        message_vision("$n����������$N��ͷһ�£�ŭ�ȣ����ȥ�����ù�����������\n",me, ob);
        return 0;
    }
    if(i == 1)
    {
        if(arg != "��ţ�˹�ɢ")
        {
        command("say ������������ô���������������");
        me->add_temp("wrong",1);
        return 1;
        }
    else
        {
        command("say ����ˣ�����������һ�⣡");
        me->add_temp("torask",1);
        command("say ���ʵ�ݺ��ð�ˣ�����Ҫ����ʲôҩ(answer)��");
        return 1;
        }
    }
    if(i == 2)
    {
        if(arg != "������ð�ǽ�")
        {
        command("say ������������ô���������������");
        me->add_temp("wrong",1);
        }
    else
        {
        command("say ����ˣ�����������һ�⣡");
        me->add_temp("torask",1);
        command("say ����ʲô������������ģ�Ч���죬�ָ�����Ҳ�죬��ĺ�(answer)��");
        return 1;
        }
    }
    if(i == 3)
    {
        if(arg != "��֧��ɡ����¶��")
        {
        command("say ������������ô���������������");
        me->add_temp("wrong",1);
        }
    else
        {
        command("spank "+me->query("id"));
        command("say ����ˣ��ܺúܺã����Ѿ����п���ʦ���ʸ񣬿������˿���(vet)�ˣ�");
        me->set("doctor/vet",1);
        me->delete_temp("torask");
        me->delete_temp("wrong");
        return 1;
        }
    }
  }
}
int do_say(string arg)
{
    object me=this_player();
    object ob=new("/open/doctor/obj/b-mark");

    if( arg == "��" || arg =="Ը��")
{
    if(me->query("doctor/book_select")==1)
{
        write("��Ȼ����˼��...�����桸�����ͽ�������...\n"NOR);
        ob->move(me);
        command("addoil "+me->query("id"));
        me->delete("doctor/book_select");
        me->set("doctor/start_quest", 1);
        me->set("doctor/get_mark", 1);
        return 1;
    }
  }
}
string ask_tor()
{
    object me;
    me=this_player();

    if(me->query("doctor/tell_woman")==1)
{
        command("er "+me->query("id"));
        me->delete("doctor/tell_woman");
        me->set("doctor/ask_tor",1);
        return "";
  }
}
string ask_vet()
{
    object me = this_player();

    if(me->query("doctor/vet") == 1)
    {
        return "�ף��㲻���Ѿ��Ǹ����������˵Ŀ���ʦ����";
    }
    if(!me->query_skill("cure") >= 120)
    {
        command("say ���ҽ����ô�ͣ���ô���˿���ڣ�");
        return "�ٻ�ȥȥ��ѧ����ɣ�";
    }
    if((int)me->query_temp("wrong") >= 3)
    {
        command("say ����ô�����Ⱑ��");
        return "���������ҹ���ȥ��";
    }
        command("say �ã���Ҫ���㼸�����⣬��ȷ�����Ƿ����ʸ��ο���ʦ��ְλ��");
        command("say ��һ�⣡���ʰ����ھ��ж�������ĸ��ȥ��ʲô������ǿ��(answer)��");
        me->add_temp("torask",1);
        return "";
}
string ask_savedie()
{
    object me;
    me=this_player();

    if(me->query("doctor/ask_tor")==1)
{
        command("hmm "+me->query("id"));
        command("say ��...�����ðɣ��ҾͰ�ʵ����������...");
        command("say �ⲻ��֮���ഫ�����滪��������֮ǰ���ڸ�����ġ�ʥ�ֻش�������");
        command("say ����...�������ʧ���Ծ��ˣ���Ȼ������λ����ǰ������ϰ�ô���...");
        command("say ������λǰ����˵���ڲؾ�������֮�����Ѷȫ��...");
        command("say ���Ҿ��Ҳ�Ѿ�����ʮ�����ˣ�����...�������Ļ��ʿ�˵��΢����΢...");
        command("say �����¹���������֪�����Ƿ�Ը��ȥ���ҿ��أ�");
        me->delete("doctor/ask_tor");
        me->set("doctor/book_select",1);
        return "";
  }
}
int accept_object(object me, object ob)
{
    if(me->query_temp("sos_letter") && ob->query("id")=="oldman letter")
{
        write("��սս�����İ��Ž����˻���...\n"NOR);
        command("mad");
        command("slap "+me->query("id"));
        command("say �����Ƕ�����������ˣ�");
        command("say �˼ұ����ǻ�ҧ���ˣ��㶼����ҽ�����������ҵĵ�����ӣ�");
        command("snort");
        command("say ���ˣ�����Ҫ�����������ȸ��ҰѶ��ǻ��Ľ�������");
        command("say ......����ɶ������ȥ�ڣ���");
        me->set_temp("find_cornu",1);
        return 1;
}
    if(me->query_temp("get_cornu")==1 && ob->query("id")=="cornu")
{
        write("��Ѷ��ǻ��Ľǽ����˻���...\n"NOR);
        me->delete_temp("get_cornu");
        me->set_temp("find_root",1);
        destruct(ob);
        command("nod");
        command("say ��������Ʒ...�ǽ�����������ȥ�Ұ�����������");
        return 1;
}
    if(me->query_temp("get_root")==1 && ob->query("id")=="root" && !me->query_temp("give_cornu"))
{
        write("��Ѱ��������������˻���...\n"NOR);
        destruct(ob);
        command("spank"+me->query("id"));
        command("say ���ú�...���������㽫������Ļ���...");
        write("���Ӱ�����ҩ�ĸ�������һ��ҩ�裬����������...\n"NOR);
        command("say �����ҩι(feed)�������˼ҳԾ�û����...");
        me->delete_temp("give_cornu");
        me->set_temp("get_pill",1);
        ob=new("/open/doctor/obj/tc-pill");
        ob->move(me);
        return 1;
}
    if(me->query_temp("sec_letter") && ob->query("id")=="oldman letter2")
{
        write("�����ͷ�ĵڶ����Ž����˻���...\n"NOR);
        command("haha "+me->query("id"));
        command("pat "+me->query("id"));
        command("say ���Ȼ������������ʵ�ĺõ���...");
        command("say ��ʵ�Ǹ���ͷ���ҵ�һλ���ѣ��ҹ���Ҫ����̽��ģ�");
        command("say û�뵽��Ķ���������˿�󣬽����϶��Ǹ���ҽ����");
        command("hoho");
        command("say ��ô����û������ɣ�");
        command("say ��Ȼ����˵�������ʵ������ҲӦ�ð��������ŵİ��崫�ڸ����ˣ�");
        tell_object(users(),HIW"
����Ц����"HIY"�ۡ�����������\n
          "HIG""+this_player()->name()+""HIY"��ͽ��\n
          �����Ͱ���"HIW"������"HIY"��"HIR"������ʽ"HIY"�������㣡������\n\n"NOR);
        me->set("doctor/sosman",1);
        me->delete_temp("sec_letter");
        me->set("title",HBBLU+HIW"��"HIY"����"HIR"����"HIW"��"HIG"����"NOR);
        return 1;
  }
}
void attempt_apprentice(object ob)
{
        if(this_player()->query("class")!="doctor")
        {
                command("sigh");
                command("say �㲻��ҽ�ߣ��Ҳ������㡣\n");
                return;
        }
      if((int)ob->query("str") >19 )
        {
          command("sigh");
          command("say ���������������������������..\n���˹�֮"+ RANK_D->query_respect(ob) + "�������ƺ����ˣ�\n");
return;
        }

        command("hmm");
        command("pat" + ob->query("id"));
        command("recruit "+ob->query("id"));
        message("system",HIR"
"HIW"������"HIC"�ڴ���һ������ĳ�Х����\n
          "HIR"��"HIW"�� "HIY"��~��~�~�~̾~��~��"HIW" ��"HIR"�� \n
                     ��"HIW"�� "HIY"��~Ҷ~Ʈ~Ʈ~��~��~��"HIW" ��"HIR"�� \n
       "HIW"�������ʵ�ϣ���"HIC""+this_player()->name()+""HIW"��Ͷ������֮�£��ᶨ�ú���������\n\n"NOR,users());
}

void heart_beat()
{
 object me,boy;
 int value;
 me=this_object();
  if(me->query_condition("lyssa"))
  {
    me->clear_condition("lyssa");
    message_vision(HIY"ֻ��$N˫�ۺ�Ȼտ�Ž��,���һ��,�Ƴ������ϵĿ�Ȯ����!!!\n",me);
  }
 boy=present("medicine boy",me);
 if(boy)
  if(boy->query_condition("lyssa"))
  {
    boy->clear_condition("lyssa");
    message_vision(HIG"ֻ��$Nһ������$n�ı���,$n��ʼ����ð��,��$n���ϵĿ�Ȯ�����ƺ�Ҳ���ź�ˮ��ȥ!!\n",me,boy);
   }
 value=random(10);
 if( is_fighting() )
 if( value < 4){
 if( query("kee") < query("eff_kee") ) {
   message_vision(HIW"\n���Ӽ����Ʋ���,�Ͻ��������鵤,��ɫ��ʱ�ö���\n"NOR,me);
    me->receive_heal("kee",500);
    me->receive_heal("gin",200);
    me->receive_heal("sen",200);
    me->delete_busy();
    me->clear_condition();
    me->do_command("perform stabber.gold-needle");
  }
 } else if( value > 7)
   command("perform yu-needle.gold-needle");
   else if( value = 6)
   command("perform yu-needle.break-kee");
    ::heart_beat();
}

int do_verify(string arg)
{
 object me,ob;
 me=this_player();
 ob=new("/data/autoload/doctor/needle1");
 if( arg!="needle")
{
    write("��Ҫ����ʲô\n");
    return 1;
   }
if(me->query("family/family_name")!="������")
  {
    write("ֻ��������ͽ�Ż�������\n");
    return 1;
  }

 if( present("chhu needle",me) )
  {
    write("���Ѿ��������\n");
    return 1;
   }
   else
    {
     write("����˵�����������ŵ����� ,����úñ��� ,������ʧ��\n");
     ob->move(me);
     return 1;
    }
}
void unconcious()
{
        object winner = query_temp("last_damage_from");
        if(!winner){
          :: unconcious();
          return ;
        }
tell_object(users(),HIW"
������"HIR"��ͻȻ���������Ĳҽ���...\n
          "HIR"����"HIW"����"HIY"��"+HIG+winner->query("name")+HIR+"����Ҫ����һʱ������Ѫ��ʹ�಻��...\n
                  "HIR"��ʱһ���������"HIW"���ָ�"HIR"�����...�ѵ���������ע�����...��\n
\n"NOR);
        :: unconcious();
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
        if ( winner->query_temp("bless")==1 )
        {
        j=random(6000);
          if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
          {      
          new("/open/sky/obj2/charity_stone")->move(environment(winner));
          message_vision(HIM"\n�ӻ��ӵ����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/charity_stone",sprintf("%s(%s) �û��ӵ���������ʯ�� %s\n",
          winner->name(1),winner->query("id"),ctime(time())));
          }
        }else{
        j=random(12000);
          if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
          {      
          new("/open/sky/obj2/charity_stone")->move(environment(winner));
          message_vision(HIM"\n�ӻ��ӵ����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/charity_stone",sprintf("%s(%s) �û��ӵ���������ʯ�� %s\n",
          winner->name(1),winner->query("id"),ctime(time())));
          }
        }
        tell_object(users(),HIW"
������"HIR"�ڴ���һ��Թ�޵�̾Ϣ��������\n
     "HIW"������"HIG"����"HIW"��ҽ��ʮ�꣬���������������ɥ-"+HIR+winner->query("name")+HIW+"-֮��...�� \n
             "HIW"һ��"HIY"*����*"NOR"����"HIC"������"HIW"���Ͽա����� \n
                         "HIR"һ����ҽ"HIG"�����ӡ�"HIW"�ʹ�����....\n\n"NOR);
        ::die();                                                           
}

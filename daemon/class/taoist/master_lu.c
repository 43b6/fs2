#include <ansi.h>
inherit NPC;
inherit F_MASTER;
string magic1();
string magic2();
string magic3();
string adv_taoist();
//��ѩ�籩֮�� by nike
string love_sky();
string why_sigh();
string butter_fly();
string ice_spell();

string do_area();
string do_array();
string do_howgo();
string ask_tesin();
string ask_tesin2();
string ask_god();
string ask_blood_king();
string do_mission();
string do_area1();

void create()
{
        set_name("½���",({"master lu","master","lu"}));
        set("long", 
"��������۵����ţ����ް߰ף�һ�Գ�ü���ա���������Ӧ��
�����ˣ�������ȴ��Ȼ������ȣ���ʮ���������ʮ�������
�ˡ���˵��������ͨ"HIG"�׾�"NOR"��"HIG"��ׯ"NOR"�����һ�����"HIG"����"NOR"����һ�ࡣ\n"
);
       
        set("gender","����");
        set("class","taoist");
        set("nickname",MAG"�����ϵ�"NOR);
        set("combat_exp",3000000);
        set("attitude","friendly");
        set("age",88);
        set("title","�����������");
        set("str",20);
        set("cps",30);
        set("cor",25);
        set("per",25);
        set("int",35);
        set("con",25);
        set("spi",25);
        set("kar",40);
        set("max_s_kee",100);
        set("s_kee",100);
        set("sec_kee","tiger");
        set("max_kee",10000);
        set("kee",10000);
        set("max_sen",10000);
        set("sen",10000);
        set("max_gin",10000);
        set("gin",10000);
        set("force",5000);
        set("inquiry",([
        "������" : (:love_sky:),
        "̾��" : (:why_sigh:),
        "С��" : (:butter_fly:),
        "��������" : (:ice_spell:),
        "����" : (:do_area:),
        "������" : (:do_array:),
        "������" : (:do_howgo:),
        "ʧ������" : "�������������˼��ʱʧ��ģ���Ҳ��֪����η���",
        "�׾�" : "��ȥ���鷿��������ʦ�Ҫһ�����ж��ɡ�",
        "��ׯ" : "���鷿����м��ᷭ��������ȥ��������ʦ�Ҫ��������",
        "Ѫħ" : (:ask_blood_king:),
        "��ʥ��" : (:ask_god:),
        "��ң��" : "��ң���ڴ�ս�к�������..������ʦ˵..��ս������Ѫħ����Χ��..��������ôƾ������...Ӧ�ò���������׾ͱ�����...",
        "��������" : "������ʦ��˵��,���������ǵ����������������һ����,��˵������
����������������������������..����..��Ҳֻ����...�������Ҽ���.",
        "������" : (:ask_tesin:),
        "һ��֮Ե" : (:ask_tesin2:),
                "ʹ��" : (:do_mission:),
        "�����ɾ�" : (:do_area1:),
                "��ʦ" : "�������˶�ӵ�г�ǿʵ������������������֮�˵ĳƺ�...
������֪..Ŀǰ�ƺ�ֻ��-������-ӵ�д˷��.",
        "������ʿ" : (:adv_taoist:),
          ]));
        set("chat_chance",3);
        set("chat_msg", ({
                "½��绺���Ć���������������...������...��������...����ꡱ\n",
        }));
        set("max_force",5000);
        set("max_mana",3000);
        set("mana",3000);
        set("atman",3000);
        set("max_atman",3000);
        set("mana_factor",60);
        set_skill("literate",40);
        set_skill("cure",90);
        set_skill("taoism",90);
        map_skill("cure","taoism");
        set_skill("force",60);
        set_skill("gforce",100);
        map_skill("force","gforce");
        set_skill("dodge",80);
        set_skill("g-steps",100);
        map_skill("dodge","g-steps");
        set_skill("magic",100);
        set_skill("gmagic", 100);
        map_skill("magic", "gmagic");
        set_skill("whip",105);
        set_skill("gwhip",100);
        map_skill("whip","gwhip");  
        set_skill("parry",70);
        map_skill("parry","gwhip");
        set_skill("spells",120);
        set_skill("necromancy",100);
        map_skill("spells","necromancy");
        set_skill("move",80);
        map_skill("move","g-steps");
        set("spells/feeblebolt/level",90);
        set("spells/missible/level",100);
        set("spells/hardshell/level",90);
        set("spells/invocation/level",100);
        set("spells/stopmove/level",1);
        set("spells/lightfire/level",1);
        set("spells/flee/level",60);
        set("spells/manabody/level",1);
        set("force_factor",10);
        set("guild_master",1);
        set("chat_chance_combat",200);
        set("chat_msg_combat",({
         (: magic1 :),
         (: magic2 :),
         (: magic3 :),
        }));
        setup();
        create_family("�����",2,"������");
        carry_object("/open/tendo/obj/red_dragon_chain")->wield();
        carry_object("/open/tendo/obj/lucloth")->wear();
        carry_object("/open/tendo/obj/luboot")->wear();
        add_money("gold",20);
}

int accept_object(object me, object obj)
{
        if( obj->query("name") == "ʧ������" )
        {
          command("pat "+getuid(me));
          command("say ̫����, �����ڤ�����޵������û�������л�ˡ�\n");
          if( me->query("family/family_name") == "�����" )
          {
            command("say ��Ȼ��Ѱ�������й�, �ұ㽫�������������صľ�ѧ��������ɡ�\n");
            write(me->query("name")+"����½�����˵�Ŀھ���������һ�顣\n\n"+
            "������������ǻ�Ȼ��ͨ, ȫ������Ѹ����תһ���졣\n\n"+
            "��ѧ���������������صľ�ѧ�����\ս������\n\n");
            if( me->query("force") < me->query("max_force") )
            me->set("force",me->query("max_force"));
            me->set("marks/god-kee",1);
            me->set("title",HIY"���"HIR"�մ�����"NOR);
          }
          destruct(obj);
        }
        else
          command("? "+getuid(me));
       if( obj->query("name") == HIR"����ħ������ͷ"NOR )
        {
          command("spank "+getuid(me));
          command("say ��л����Ϊ���ֳ�����\n");
          if( me->query("family/family_name") == "�����"&&(int)me->query("combat_exp")>=5000000 && !me->query("quest/tendo_hawk")&&me->query("quest/ask_tendo_hawk1")==1)
          {
            command("say �����������ħ����ս���꣬�������������磬����̫ƽ��\n");
            command("say ����Ϊʦ����ȥ�����ɾ��ݼ���ʦү�ɡ�\n");
            me->move("/open/tendo/room/b1");
          }
          destruct(obj);
        }
        else
          command("? "+getuid(me));
              return 1;
}
string love_sky()
{
    object me = this_player();

        if(me->query("class")!="taoist")
                return "�㲻�Ǳ��ŵ��������ʲô��";
    if(me->query("combat_exp") < 5000000) return 0;
    if(!me->query_temp("icestorm/love_sky"))
    {
                command("sigh");
                me->set_temp("icestorm/lovestory",1);
                return "��...��...������...������";
    }
}
string why_sigh()
{
        object me = this_player();
        
        if(me->query_temp("icestorm/lovestory")==1)
        {
                command("sob");
                command("say ����������֪��...�뵱��С����������...���Ҿ���������...");
                me->set_temp("icestorm/lovestory",2);
                return "һ�ж����ҶԲ�������...\n";
        }
}
string butter_fly()
{
        object me = this_player();
        
        if(me->query_temp("icestorm/lovestory")==2)
        {
                command("sigh");
                command("say ���´�����...û�뵽������¶��Ѿ�������ʮ������...");
                command("say �뵱��С�����Ϸ��С��÷��������˽������...");
                command("say ���μ��˵Ĳ��޳ɣ����������˷߶�����һͬ���ң�����ʮ��֮�ھ�����Ȣ...");
                command("say ��������Լ������ʮ����ڳ���ɽܽѩ�������һͬ���׳���...");
                command("say ���Ϸ�ȴ...ȴ����Υ��������...͵͵�Ļ�������һ��Ů����ɻ�Լ...");
                command("say ��֪���С����...���ճյ���ܽѩ�ĵ��Ϸ�...");
                command("say �ȵ��Ϸ��Ȼ����֮ʱ���ҴҸϵ�ܽѩ��ȴΪʱ����...");
                command("say С����Ϊ�˵��Ϸ������ʦ���ͷ����������һ������...");
                command("say ���Ϸ�ʱ����Ϊ�������޷��ƽ���п�ġ��������䡱...");
                command("say �Ϸ�Ӵ˱��¶����ģ�һ�������������Ȣ������ܽѩ�ĸ���Ϊ������...");
                command("say ��Ȼ�¸����꣬��ֱ�����գ��Ϸ���û������ȥ���С��...");
                command("sigh");
                me->set_temp("icestorm/lovestory",3);
                return "����ʼĩ�������...";
        }
}
string ice_spell()
{
        object me = this_player();
        
        if(me->query_temp("icestorm/lovestory")==3)
        {
                command("say ��п�Ĺ�����������ʧ��������...");
                return "���Ϸ���ϵ�ܽѩ��ʱ��ѯ�ʹ�һ����������˵�м���һ���ϵ�����ɽ��ȥ��
ȴ��֪��ν���£�ֻ֪������������һ������";
        }
}
string do_mission()
{
  object who=this_player();
  if(who->query("class")!="taoist")
    return "�㲻�Ǳ��ŵ��������ʲô��";
  if(who->query("quest/ask_tendo_hawk")!=4)
    return "�ⲻ�Ǌ����ʵİ�";
  who->set("quest/ask_tendo_hawk1",1);
  return HIY"����ħ����������˼䣬��ʦ�㷢��Ҫ��������ά�����º�ƽ�����\n            ��ȡ������ħ������ͷ��Ϊʦ�������������ռ䡯��"NOR;
}
string adv_taoist()
{
object me=this_player();
int i;
i=random(3);
                if(me->query("class")!="taoist")
                return "���, �����Ǳ���֮��,����ô�����...";
        if(me->query("adv_taoist"))
                return "���Ѿ����˻���??";
        if(me->query("combat_exp") < 3000000 )
                return "��ľ��黹̫ǳ����, ���ĥ�����������Ұ�...";
        if(me->query("spells/feeblebolt/level")<100)
                return "��Ĳ�ڤ֮��������ǿ, �����ʸ�";
        if(me->query("spells/missible/level")<100)
                return "�������֮��������ǿ, �����ʸ�";
                if(i==0){
                me->set("title",HIR"������"HIW"�B"HIG"ڤ��"HIM"��ʹ"NOR) ;
                                message("system",HIG"½�������˵��:��ϲ"HIY+this_player()->name()+HIM"��Ϊ"HIR"������"HIW"�B"HIG"ڤ��"HIM"��ʹ..\n"NOR,users());
                } 
                else if(i==1){
                me->set("title",HIR"������"HIW"�B"HIR"����"HIM"��ʹ"NOR) ;
                                message("system",HIG"½�������˵��:��ϲ"HIY+this_player()->name()+HIM"��Ϊ"HIR"������"HIW"�B"HIR"����"HIM"��ʹ..\n"NOR,users());
                }
                else{
                me->set("title",HIR"������"HIW"�B"HIC"����"HIM"��ʹ"NOR) ;
                                message("system",HIG"½�������˵��:��ϲ"HIY+this_player()->name()+HIM"��Ϊ"HIR"������"HIW"�B"HIC"����"HIM"��ʹ..\n"NOR,users());
                }
                me->set("adv_taoist",1);
        return "��ϲ��,��Ϊ���ϲ�¥���������ļ���ڤ֮���и��������!!";
}
void attempt_apprentice(object ob)
{
        object whip;
        if(this_player()->query("class")!="taoist")
        {
                command("say ����־��ͬ��������Ѱ��ʦ�ɡ�\n");
                return;
        }
        if(this_player()->query("kar") < 25)
        {
                command("say ������Ե�޷ݣ�������Ѱ��ʦ�ɣ�\n");
                return;
        }
        command("hmm");
        command("recruit "+ob->query("id"));
        message("system",HIG"½��縧��Ц����  �����֮����������֮��  ��

��������У��ֶ���һλ�ɷ���ǵ���ʿ����\n"NOR,users());
        
        command("say ���������������ԣ��ǲ����Ѿ�����Ҫ���˽��֡�");
        write("\n");
        command("hmm");
        command("say �������ȥ��־��ʦ����������õĵ�����");
}
string do_area1()
{
  object who=this_player();
  if(who->query("class")!="taoist")  
     return "�㲻�Ǳ��ŵ��������ʲô��";
  return 
HIY"������ʦΪ�˷�ֹ���˴��������ɾ��������ޣ��ر������֮������\n            ���ϵ���������ռ䡯�����Ը�����ǰ�������ɾ���������������\n            ����ʹ�������ܻ�׼�����ɾ���"NOR;
}

string do_area()
{
  object who=this_player();
  if(who->query("class")!="taoist")
        return ("��....����֮ѧ���������������������˵��ġ�");
  return (
"˵��������"HIW"������"CYN"����Ϊʦ����������Ϊ�����ų�������"NOR"");
}

string ask_tesin()
{
if( this_player()->query("quests/shasword")==2)
{
return("��ʦ������..����������һ��֮Ե..�����ڵ�ʱ����������..����޷��������!");

}
}
string ask_tesin2()
{
if( this_player()->query("quests/shasword")==3)
{
this_player()->set("quests/shasword",3);
return(" �ҵ�ʱ������ħ��,����������������.������������.��ѭ������,������ҵü���˵�еĴ�ʦ!");
 }
}
string ask_blood_king()
{
if (this_player()->query("quests/shasword")==2)
{
return ("�ٶ���ǰ.Ѫħ��������..�ɽ���ʦ��ң�Ӵ��쵱������ʢ���ĵ���.�������˳����ħ.֮��Ѫħ�������伣.����ң������ʥ������ʧ������.");
}
}
string ask_god()
{
if (this_player()->query("quests/shasword")==2)
{
 this_player()->set("quests/shasword",4);
 return ("����ʥ��..��˵�ǵ���ʵ����ǿ��������..");
}
}

string do_array()
{
  object who=this_player();
  if(who->query("class")!="taoist")  
    return ("�㲻�Ǳ��ŵ��������ʲô��");
    who->move("/open/center/room/inn");
  if(!who->query_temp("asked")) {
    who->set_temp("asked",1);
    return ("\nҲ��....���Ȼ��Ϊ��ʿ��Ҳ��֪�����¡�½���������˼��˵��,
��������������"HIW"������"CYN"���ǵ���ħ�����--ħ�۶���������������
��ʱ������ʦү��ӡ���ǵġ���������Σ�����ޣ�Ϊʦ���صز���
�ڴ˼��Ա������Է�������֦������ʦү�����ǰ��һ��ԡѪ��ս��"NOR"");
  }
  return (
"����ɱ��ɱ�ƣ���ר����ħ������衣
��ɱ������ ��������������Ϊ��ħ��Ϯ��������

����½������˫�ص�˵�� : �������Ϊ�������ǣ��ɰ�����
�����������пɵ���������п���ħ�����м��мǡ�");
}

string do_howgo()
{
 object who=this_player();
  if(who->query("class")!="taoist")
        return (
"�����˱��Ż��ܣ�"+RANK_D->query_respect(who)+"���ض����ˡ�");
  return (
"�������������������쳣�������ǵ��꣬��ʦүҲ���˾�ţ����֮���Ž����ס��
 ������һֻǿ��������������������!!");
}
int accept_fight (object who)
{
command("conj hardshell");
return 1;
}
int accept_kill(object who)
{
who=this_player();
kill_ob(who);
command("conj hardshell");
command("say ʩ����ִ�����,�ݹ�ƶ������������!!");
return 1;
}

string magic1()
{
if(this_object()->query("kee")<=3000) {
          command("cast king invocation");
        }  
        return "\n";
}
string magic2()
{
if(random(2)<=1) 
command("cast missible");
else command("cast feeblebolt");
return "\n";
}
string magic3()
{
if(random(3)<=2)
command("cast stopmove");
return "\n";
}

void die()
{
        object cloth;
        int j;
        object winner = query_temp("last_damage_from");
        string name = winner->query("name");
        string class1 = winner->query("family/family_name");

        if(!winner)
        {
        ::die();
        return ;
        }

        new("/open/tendo/obj/lucloth")->move(winner);
        tell_object(users(),HIW"          
         ½���"HIG"̾��:"HIC"����"HIG"��δ�һ�,"HIR"ڤ������"HIG"δ��,
                    ��,�Ҿ���ܸ�"+HIB+class1+HIG"����"+HIB+name+HIG+"֮��,
                    �Ҳ����İ�!!\n\n
              "HBCYN"һ���׹������ɽֱ�����\n"NOR);

        if ( winner->query_temp("bless")==1 )
        {
        j=random(6000);
          if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
          {      
          new("/open/sky/obj3/light_feather")->move(environment(winner));
          message_vision(HIM"\n��½�������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/light_feather",sprintf("%s(%s) ��½�������˹�֮������ %s\n",
          winner->name(1),winner->query("id"),ctime(time())));
          }
        }else{
        j=random(12000);
          if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
          {      
          new("/open/sky/obj3/light_feather")->move(environment(winner));
          message_vision(HIM"\n��½�������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/light_feather",sprintf("%s(%s) ��½�������˹�֮������ %s\n",
          winner->name(1),winner->query("id"),ctime(time())));
          }
        }
::die();
}


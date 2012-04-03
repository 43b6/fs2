// �μ� ������
#include </open/open.h>
int exert_sunforce();
inherit NPC;
inherit F_MASTER;
string do_thief();
string do_scar();
string do_chao();
string do_firecracker();
void create()
{
        set_name("����",({"lord duan","lord","duan"}));
        set("long","���Ʊ��ǵ�����ϲ���ƽ����, ͬʱҲ�Ƕμ���ѧ�ĵ�ʮ������, "+
"��Ȼ��Ϊ��ү, ����һ���ӵ�īˮ, ����һ���洫����ѧȴҲû��, ��˵������˫ȫ, "+
"Ҳ��Ϊ���, �������Ƿǳ�������ѧ����, �������μ���ѧ������, �����һλ�������ɡ�\n");
        set("gender","����");
        set("class","scholar");
        set("nickname","ƽ����");
        set("combat_exp",1000000);
        set("attitude","heroism");
        set("age",50);
        set("max_kee",3000);
        set("kee", 3000);
        set("str", 44);
        set("cor", 24);
        set("cps", 45);
        set("per", 30);
        set("int", 42);
        set("inquiry", ([
        "thief"         : (: do_thief :),
        "scar"          : (: do_scar :),
        "sad_story"     : "���㲻֪������Ե��,�Ͳ�Ҫ�����ˡ�",
        "chao"          : (: do_chao :),
        "firecracker"   : (: do_firecracker :),
        "һ���ķ�����"  : "��һ���ķ���������˵���������Ѱ��, ֻ�ǲ�֪����ʱ������",
        ]));
        set("force",3000);
        set("max_force",3000);
        set("force_factor", 10);
        set_skill("cure", 60);
        set_skill("dodge", 70);
        set_skill("force",80);
        set_skill("move", 70);
        set_skill("parry", 70);
        set_skill("stabber",120);
        set_skill("unarmed",20);
        set_skill("literate",120);
        set_skill("sunforce",80);
        set_skill("linpo-steps",100);
        set_skill("six-fingers",100);
        map_skill("force","sunforce");
        map_skill("dodge","linpo-steps");
        map_skill("move","linpo-steps");
        map_skill("parry","six-fingers");
        map_skill("stabber","six-fingers");
        map_skill("unarmed","six-fingers");
        set("functions/handwriting/level",50);
        set("marks/sun-finger",1);
        set("chat_chance_combat", 40);
        set("chat_msg_combat", ({
                (: perform_action("stabber.handwriting") :),
                (: this_object(),"exert_sunforce" :),
        }));
        setup();
        carry_object(PING_OBJ"neck0")->wear();
        carry_object(PING_OBJ"cloud_fan")->wield();
        add_money("gold",10);
        create_family("�μ�",10,"������");
}

void init()
{
        add_action("do_answer","answer");
        set_heart_beat(1);
}
void heart_beat()
{
        if( random(4) < 1 ){
        if( is_fighting() ){
                if( query("kee") < query("eff_kee") )
                        command("exert recover");
        }
        else{
                if( query("eff_kee") < query("max_kee") )
                        command("exert heal");
        }
        }
        :: heart_beat();
}       

string do_thief()
{
        object me=this_player();
        if( me->query_temp("thief") < 4 )
          return("���ǵĴ��..��..���Ҷμ��й���");
        else
        {
          command("sigh");
          return("��..û�뵽..��..��..");  
        }
}
string do_scar()
{
        object me=this_player();
        if( me->query_temp("thief") >= 3 )
        {
        if( me->query_temp("thief") == 3 )      me->set_temp("thief",4);
          return("������Ҷ�����һС�˺�, ��ʹ���Ƕμҵ�\��\�����ѵ�..�ѵ�����..\n\n"+
          "���������������˼֮��, �ƺ��ڻ�����ʲô��\n\n"+
          "���Ʊ�Ǹ��˵��: �Ҳ��������������������(sad_story)�ˡ����˰�,�Ϳ�..");
        }
        else
          return("ɶ..˭���˺ۣ�");
}
string do_chao()
{
        object me=this_player();
        object key=new(PING_OBJ"key0");
        if( me->query_temp("thief") >= 5 )
        {
          if( me->query_temp("thief") == 5 )    me->set_temp("thief",6);
          command("say ��..��Ҳ֪����������˰�..����������˵�İ�..��ʵ����"+
          "��ô����, ��Ҳ�������ʵ�ˡ����ٷ��ɾ��Ǵ��, Ҳ���Ƕμҹ�"+
          "�̲�������, ����Ҫ�������ٷ�, ֻ��һ���취, ���������ǶμҶ�"+
          "�ŵ������̻�, ���������̻�ض�����֡�");
          message_vision("$N����$nһ����Կ�ס�\n",this_object(),me);
          key->move(me);
          return("�������ǶμҴ����ҵ�Կ��, ����������ҵ������õ�����");
        }
}
string do_firecracker()
{
        object me=this_player();
        if( me->query_temp("thief") >= 6 )
        {
          if( me->query_temp("thief") == 6 )    me->set_temp("thief",7);
          return("��..��Ǹ����˵�����̵�ʹ�÷���, ��������Ҫ�ڸߵ�ȼ�Ų���, "
          +"����ȼ��ǰҪ�Ȧ䣦���䣪������....�����˰ɡ�");
        }
        else
          return("��..������֪���������̵���, ������ʵ����!!");
}

int exert_sunforce()
{
        object ob=this_object();
        if( ob->query("kee") < ob->query("max_kee")/2 )
        if( !present("sunforce finger",ob) )
        {
          command("say ��..�Ϸ���������档");
          command("exert sun-finger");
          command("wield finger");
        }
        return 1;
}

int do_answer(string str)
{
        object me=this_player();
        string *answer = ({
        "��������������",
        "ȥ�տ��",
        "��Ӱ������",
        "��Ȼ����ɽ",
        "���粻�����Ź�",
        "���������޹���",
        "���˵����",
        "�˺������޾���",
        "����ɻ���\ʼ��",
        "ǧ�ŷ�������",
         "һ�������޾���",
         "�Ǿ�һ��Ц�쳾",
         "���԰�Ц���˳�",
         "��������ް���"
        });
        if(me->query_temp("answer") < 0);
        else
        {
          if(str == answer[me->query_temp("answer")])
          {
            command("pat "+me->query("id"));
            write("�ܺã�" + RANK_D->query_respect(me) + "����ѧ���Ӳ���, ���Ŭ��, "+
            "���ձ���Ϊ�μҷ�����, �ڽ������������ա�\n");
            command("recruit " + me->query("id") );
            me->set("startroom",environment(me));
            write("��..����ڹ���������, ��Ϊʦ������һ��֮���ɡ�\n");
            message_vision("���ƻ������������, ��$Nͷ���İٻ�Ѩһ��, ˿˿��������$N��ͷ��ð�˳���....��\n",me);
            me->improve_skill("sunforce",2);
            command("smile "+me->query("id"));
            write("����, Ϊʦ�ѽ�һС���ݵ�һ���ķ�������, �������ٽ�����, ���ڴ�ɡ�\n");
            CHANNEL_D->do_channel(this_object(), "chat",
            sprintf("%s��Ϊ�μҵ�һԱ��, ϣ������ܱ��Ž��������չ�����",me->name(1)));
          }
          else
          {
            command("sigh "+me->query("id"));
            write(RANK_D->query_respect(me)+"�����ѧ����̫ǳ��, Ҳ��Ӧ�ö�ȥƷ���鼮, "+
            "�´��а������������Ұ�...\n");
          }
          me->delete_temp("answer");
        }
        return 1;
}               

void attempt_apprentice(object me)
{
        int which;
        string *question = ({
        "���𡮺��¸衯\n������ɽ������\��! ʱ����������! ��������κ�! .......��",
        "�ܲ١��̸��С�\n���ԾƵ���, ��������? Ʃ�糯¶, ....��",
        "��ס����¶��á�\n������һ����, ����������; �ٱ�������, .....��",
        "��Ԩ�������ơ�\n����¬���˼�, ���޳��������ʾ����ܶ�, ��Զ����ƫ���ɾն�����, .....����",
        "��֮�������ݴʡ�\n���ƺ�Զ�ϰ��Ƽ�, һƬ�³�����ɽ��Ǽ�Ѻ���Թ����, .......����",
        "��ά��μ������\n��μ�ǳ�����峾, ����������ɫ�¡�Ȱ������һ����, .......��",
        "�Ÿ��������˴�ʿ��\n�����������, ��������̡���Ϧ����Ϧ, .....��",
        "�׾��ס����޸衯\n������Ը��������, �ڵ�ԸΪ����֦���쳤�ؾ���ʱ��, .......!",
        "�����������⡯\n�����ʱ�ѱ�����, ���������ٻ��С����ϵ���˿����; .......",
        "�󽭶�ȥ, ���Ծ�, ......��",
            "������Ծ���ų�, ����һ����ˮʱ, ս���ն���ң��.......",
            "��������־���, �������˷�����, ��������������.......",
            "����Ϊ������־, һ����α��˭֪, ��������������.......",
            "�鳵�պ����¾�, ����а��������, ��Ҷһ��������......."
        });
        which=random(sizeof(question));
        if(me->query_temp("have_apprentice"))
          write("��ô��ô���ּ�����? �´������ɡ�\n");
        else
        {
        write(" "+RANK_D->query_respect(me)+"������ҵ�������? ���ŵ��ڹ�������������, "+
        "��ѧʶû��һ���Ļ���, ���������к����Ϸ��������һ����, ��������ѧ�Ļ��ͻش�(answer)�ҵ������\n");
        write("���ƻ�����������: fl;[1;36m"+question[which]+"fc;[0m\n");
        write("���ƺͰ���˵��: ����˵˵�������ľ�����?\n");
        me->set_temp("have_apprentice",1);
        me->set_temp("answer",which);
        }
}
int accept_object(object me, object obj)
{
        if( obj->query("name") == "һ���ķ�����" )
        {
          command("pat "+getuid(me));
          command("say ̫����, ��������������л�ˡ�");
          if( me->query("family/family_name") == "�μ�" && !me->query("marks/sun-finger") )
          {
            command("say ��Ȼ�㻤�������й�, �ұ㽫�������ϼ��صľ��д�������ɡ�");
            write(this_object()->query("name")+"����������������һ�顣\n\n"+
            "������������ǻ�Ȼ��ͨ, ȫ������Ѹ����תһ���졣\n\n"+
            "[36m�������ֵ�ﵽ�����ˡ�\n\n"+
            "[1m��ѧ����һ���ķ��еľ��С�����Ϊ�ʡ���[0m\n\n");
            if( me->query("force") < me->query("max_force") )
              me->set("force",me->query("max_force"));
            me->set("marks/sun-finger",1);
          }
          destruct(obj);
        }
        else
          command("? "+getuid(me));
        return 1;
}
              
void unconcious()
{
        object winner = query_temp("last_damage_from");
        tell_object(users(),"\n\t[1m��[36m���·��Ƴ��ұ�  һ�뽭�����´�\n\t\t��ͼ��ҵ̸Ц��  ��ʤ����һ����[0m[1m��[0m\n"+
        "\n\t[1m���Ҷ����ݺὭ��, ���հ���[33m"+winner->query("name")+"[0;1m֮��\n\t��ν  [1;31mʱҲ��  ��Ҳ��  ��Ҳ��[0m\n");
        :: unconcious();
}
void die()
{
        object winner = query_temp("last_damage_from");
        tell_object(users(),"\n\n[36m�Ϸ���ջ���һ��[5m����[0m��\n\n\t[1;31m��������䡱[0m\n\n");
        :: die();
}                      

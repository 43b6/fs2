// �μ� ������
//��������֮�� by xboy
#include </open/open.h>
#include <ansi.h>
int exert_sunforce();
inherit NPC;
inherit F_MASTER;
string do_thief();
string do_scar();
string do_chao();
string do_firecracker();
string do_sixfingers();
string do_tailong();
string do_trouble();
string do_chun();
string do_help();
string do_mark();
string do_mime();
string do_fan();
void add_record(string arg);
#define  RECORD        "/u/b/bss/recode"
string bad_man,record;
void create()
{
        set_name("����",({"lord duan","lord","duan"}));
        set("long","���Ʊ��ǵ�����ϲ���ƽ����, ͬʱҲ�Ƕμ���ѧ�ĵ�ʮ������, "+
"��Ȼ��Ϊ��ү, ����һ���ӵ�īˮ, ����һ���洫����ѧȴҲû��, ��˵������˫ȫ, "+
"Ҳ��Ϊ���, �������Ƿǳ�������ѧ����, �������μ���ѧ������, �����һλ�������ɡ�\n");
        set("gender","����");
        set("class","scholar");
        set("nickname","ƽ����");
        set("combat_exp",2000000);
        set("attitude","heroism");
        set("age",50);
        set("max_kee",5000);
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
        "������"      : (: do_sixfingers :),
        "������"        : (: do_tailong :),
        "����"          : (: do_trouble :),
        "����̫��"      : (: do_chun :),
        "����"          : (: do_help :),
        "������"      : (: do_mark :),
        "�����񽣾�"    : "Ϊ�����书�������񽣡���Ҫ����֮��ѧ����, ������������Ҷ���֪�ġ����塯��ѧ��",
          "Ʈ����"        : (: do_fan :),
          "����"          : (: do_mime :),
        ]));
        set("force",3000);
        set("max_force",3000);
  set("six_spsp",1);
        set("force_factor", 20);
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
        set("functions/handwriting/level",100);
        set("marks/sun-finger",1);
        set("marks/six_sp",3);
        set("chat_chance_combat", 100);
        set("chat_msg_combat", ({
                (: perform_action("stabber.handwriting") :),
        }));
        setup();
        carry_object(PING_OBJ"neck0")->wear();
  carry_object(PING_OBJ"cloud_fan");
        add_money("gold",10);
        create_family("�μ�",10,"������");
}

void init()
{
        add_action("do_answer","answer");
       add_action("do_title","show_fan_to_duan");
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
          return("������Ҷ�����һС�˺�, ��ʹ���Ƕμҵ�\\��\\�����ѵ�..�ѵ�����..\n\n"+
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

//����Ʈ����..........by dhk
string do_fan()
{
        object me=this_player();
        if( me->query_temp("buy_ok") == 1 )
        {
        if( me->query("family/family_name") == "�μ�" )      me->set_temp("fan",1);
          return("��!!����ô��֪��Ʈ���ȣ�\n\n"+
          "���������������˼֮�У���˵������Ȼ���������Ҿ͸������!\n\n"+
          "���ƽ���˵����Ʈ�����˵���һλ������ʦ����ʤ���ʦ�����Ǵ������\n"+
          "              �������һ�Ѵ�˵�е���������Ϊ������ǿ����������\n"+
          "              ֻ�ж���ֱϵ������Ʒ�������߷���֪��������������һ\n"+
          "              ���ģ����Ǵ�ʦ�֡��������ˡ�\n");
        }
        else
          return("��");
}

//��������.......by dhk
string do_mime()
{
        object me=this_player();
        object letter=new("/u/d/dhk/questsfan/obj/letter1.c");
        if( me->query_temp("fan") == 1 )
        {
          if( me->query("family/family_name") == "�μ�" )     me->set_temp("mime",1);
          command("say ��!!!.......�ԴӶ�ʮ��ǰ��ʦ�ֳ���֮�󣬾���Ѷȫ�ޡ�����������\n"+
          "          ��ȥѰ�ң���ȫ���޹�������������!!!!�����Ҿ�����ȥѰ�Ҵ�ʦ�֡�\n"+
          "          ���й�Ʈ���ȵ�����Ҳ�����Լ������������´�ʦ�ֻ����¹����ְ�Σ\n"+
          "          ������֪��������һ�Ű��������ø�ʦ�֣�������Ӧ��ش�������⡣\n"+
          "\n");
          message_vision("$N����$nһ�Ű�����\n",this_object(),me);
          letter->move(me);
          return("�����ȥѰ��ʦ�֣��ɵ��Լ��չ��Լ���\n");
        }
        else
         return("?");
}

string do_sixfingers()
{
        object me=this_player();
        if( me->query("family/family_name")=="�μ�" && me->query("marks/six_sp")<=2)
        {
          me->set_temp("six_sp_quest",1);
          return("
              �Ҵ������������һ��ָ������������, ��һ��ָ��Ȼ����,
              �����񽣸��ǰ����ѵ���һ���ܾ����洫, ��ˡ������¡��ĸ�
              ɮΪ������һ��, ׫д��һ���������񽣾�����");
        }
        else
        {
          command("kick"+me->query("id"));
          return("����!!����ô�õĿ��뻹��֪��������, ȥ������!!");
        }
}

string do_tailong()
{
        object me=this_player();
        if( me->query_temp("six_sp_quest")==1)
        {
          me->set_temp("six_sp_quest",2);
          return("
              �����Ҵ�����ϵ���ѧ����, ��ȥ���ġ����ӡ�������������
              ��ɮ����, �ŵ��Զɹ��ѹء�");
        }
        else
          return("������ô�����...");
}

string do_trouble()
{
        object me=this_player();
        if( me->query_temp("six_sp_quest")==2)
        {
          me->set_temp("six_sp_quest",3);
          return("
              Ī���ڰ�����ǰ���ǳ��ʹ�����, ��ʱ������̫�ӡ�����Χ��,
              ����һ��ʧ��, ������õ��������ڸ�ɮЭ��, �ŵ���ƽ�ҡ�");
        }
        else
          return("��������̫ƽʢ��, ����������??");
}

string do_chun()
{
        object me=this_player();
        if( me->query_temp("six_sp_quest")==3)
        {
          me->set_temp("six_sp_quest",4);
          return("
              ����ԭΪ�Ҷμҳ�����͵�����, �κε����ǳ�����, ��
              ʹ��Ͷ��а��, ��������Ϊ�Ĵ����֮��, Σ������, ��
              �书�����а, ��ĵ�������, ������ʮ������, δ����
              ������Ϣ, �����Ѳ����������ǡ�");
        }
        else
          return("ʲô���ν�̫�á�??������˵����ò���!");
}

string do_help()
{
        object me=this_player();
        if( me->query_temp("six_sp_quest")==5)
        {
          me->set_temp("six_sp_quest",6);
          return("
              ����̫��ԭ�������˼�, ��θ�����������, ���������񽣾�,
              ͽ��, Ϊʦ����ȥ�����������������ɡ�, ��ذѱ������!!");
        }
        else
          return("ɶ?�����?������ת�ڶ�����ǲ���, ����л���ˡ�");
}

string do_mark()
{
        object me=this_player();
        object mark=new(PING_OBJ"tai_mark");
        if( me->query_temp("six_sp_quest")==6)
        {
          me->set_temp("six_sp_quest",7);
          command("say ���������������¶���, ���ȥ���, ֻ�뽻��������, ����֪���ˡ�");
          message_vision("$N����$nһֻ�����\n",this_object(),me);
          mark->move(me);
          return("��ȥ��!");
        }
        else
          return("��������Χ���, ����û�й�ϵ��");
}

int exert_sunforce()
{
        object ob=this_object();
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
write("���ƻ�����������:[1;36m"+question[which]+"[0m\n");
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
        {
        command("? "+getuid(me));
        record="";
        record=getuid(me)+"���˶���һ��"+obj->query("name")+"��"+ctime(time())+"��";
        add_record(record);
        bad_man=getuid(me);
        }
        return 1;
}

void add_record(string arg)
{
        string  *oldlist, newlist;
        int i;

        newlist="";
        oldlist=explode(read_file("/u/b/bss/record"),"\n");
        for(i=0;i<sizeof(oldlist);i++){
        newlist+=oldlist[i]+"\n";
        }
        newlist+=arg+"\n";
        rm("/u/b/bss/record");
        write_file("/u/b/bss/record", newlist);
        return ;
}
void die()
{
        object winner = query_temp("last_damage_from");
        if(!wizardp(winner)){
        tell_object(users(),"\n\t[1m��[36m���·��Ƴ��ұ�  һ�뽭�����´�\n\t\t��ͼ��ҵ̸Ц��  ��ʤ����һ����[0m[1m��[0m\n"+
        "\n\t[1m���Ҷ����ݺὭ��, ���հ���[33m"+winner->query("name")+"[0;1m֮��\n\t��ν  [1;31mʱҲ��  ��Ҳ��  ��Ҳ��[0m\n");
        tell_object(users(),"\n\n[36m�Ϸ���ջ���һ��[5m����[0m��\n\n\t[1;31m����[35m��[31m��[35m��[31m��[35mP[31m��[35m��[31m��[0m\n\n");
        }
        :: die();
}
int accept_kill(object who)
{

        who=this_player();
        if(who->query("id")==bad_man)
        {
        record="";
        record=getuid(who)+"�����������׵ķ���ɱ��������"+ctime(time())+"��";
        add_record(record);
        }
        command("unwield all");
        command("wield fan");
        command("kill "+who->query("id"));
        command("exert sun-finger");
        command("perform unarmed.handwriting");
        command("wield finger");
        return 1;
}
int accept_fight(object who)
{
        who=this_player();
        if(who->query("id")==bad_man)
        {
        record="";
        record=getuid(who)+"�����������׵ķ���ɱ��������"+ctime(time())+"��";
        add_record(record);
        }
        command("unwield all");
        command("wield fan");
        command("exert sun-finger");
        fight_ob(who);
        command("perform unarmed.handwriting");
        command("wield finger");
        return 1;
}
int do_title()
{
  object me=this_player();
  if(!me->query("make_ok"))
  {
if(me->query("gender")=="����")
{
me->set("title",""HIY"�����"NOR"��"HIC"Ʈ"NOR"��"HIC"��"NOR"�ۡ�");
  me->set("make_ok",1);
tell_object(me,"�����Ĳ������ȡ�����ѽ��...��������!!!\n");
}
else
{
me->set("title",""HIM"������"NOR"��"HIY"��"NOR"��"HIY"��"NOR"��");
  me->set("make_ok",1);
tell_object(me,"�����Ĳ������ȡ�����ѽ��...��������!!!\n");
}
}
else
tell_object(me,"�����Ѿ��Ĺ�title�ˡ�\n");
  return 1;
}

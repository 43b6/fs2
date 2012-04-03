// quit.c

#include <ansi.h>
#include <command.h>

inherit F_DBASE;
inherit F_CLEAN_UP;
inherit F_SKILL;
object ob,ob2,*inb,horse, pal;
object *inv, link_ob, body_ob, mob, wiz ;
string *gift_key, *my_key, id, src, dst,pktitle;
int i,j,k,f1,f2,f3,f4,f5,f6,f7,f8,f9,f10;

mapping gift = ([
  "str":"����",
  "cor":"��ʶ",
  "int":"����",
  "spi":"����",
  "cps":"����",
  "per":"��ò",
  "con":"����",
  "kar":"��Ե",
]);

void create()
{
  seteuid(getuid());
  set("name", "����ָ��");
  set("id", "quit");
  set_temp("channel_id", "���߾���");
}

int main(object me, string arg)
{
  mapping my;
  object env;
  env = environment(me);
  ob=present("mdragon-eq",me);
  ob2=present("god-eq",me);
  f1=me->query("functions/white/level");
  f2=me->query("functions/nine/level");
  f3=me->query("functions/gen/level");
  f4=me->query("functions/ice/level");
  f5=me->query("functions/purple/level");
  f6=me->query("functions/black/level");
  f7=me->query("functions/bluesea/level");
  f8=me->query("functions/goldsun/level");
  f9=me->query("functions/blood/level");
  f10=me->query("functions/green/level");
  wiz=0;
  if( wizardp(me) && arg ) {
    if( wiz_level(me) < 4 )
      return notify_fail("���ְȨ�޷�ǿ������뿪��\n");
    wiz=me;
    if( !(me=find_player(arg)) )
      return notify_fail("û�������ҡ�\n");
/*
    if( wiz_level(wiz) < wiz_level(me) )
      return notify_fail("���޷�ǿ���ϼ��뿪��\n");
*/
  }
  //������must_be_quit��һ���ᱻquit,ɱ������Ҳ������ by bss
  if(!me->query_temp("must_be_quit"))
  if( me->query("robot/ans") )
    return notify_fail( "��������������, ��������!\n" );

  if (me->query("pker")) {
    //chan�趨pker��ʮ���Ӳ�������
    if(me->query("PKTIME") >= time()) //����Ӧ�þͲ�����Ҫwiz������ɱ������title����by bss
      return notify_fail("��������ɱ�����֣��������ߣ�\n");

    //��ʾ������ʮ���Ӷ�û����,�Ͳ���pker�� by chan
    else {
      me->set("pker",0);
      pktitle=me->query("PKNAME"); //������title�ظ�
      me->set("title",pktitle);
      return notify_fail("�������Ծ�����ɱ��������,�ٴ�һ��quit�Ϳ���������!\n");
    }
  }

  if (me->query_temp("multipk")) {
    if (!me->query_temp("must_be_quit")) {
      return notify_fail( "��δ�ɽ����ִ�᳡�ط�, �޷����ߡ�\n" );
    }
    else {
      "/open/mulitpk/room/room01.c"->valid_leave(me,"out");
    }
  }

  if (me->is_fighting())
    return notify_fail( "������ս��, �޷����ߡ�\n");

  if (me->query_temp("������")) {
    me->delete("greeting_msg");
    me->set("id", me->query("old_id"));
    me->set("name", me->query("old_name"));
    me->set("nickname", me->query("old_nick"));
    me->set("title", me->query("old_title"));
    me->delete("old_id");
    me->delete("old_name");
    me->delete("old_nick");
    me->delete("old_title");
    env->delete("have_bandit");
  }
  if (me->query_temp("ļ����")){
    tell_object(me, HIW"�㿪ʼ�������빫,�뿪���\n"NOR);
    me->delete("greeting_msg");
    me->set("id", me->query("old_id"));
    me->set("name", me->query("old_name"));
    me->set("nickname", me->query("old_nick"));
    me->set("title", me->query("old_title"));
    me->delete("old_id");
    me->delete("old_name");
    me->delete("old_nick");
    me->delete("old_title");
    me->delete_temp("ļ����");
    me->delete_temp("��׼��");
  }

  if(me->query_temp("��׼��")) return notify_fail("�����ڲ�׼��......!!\n");

  if(!wizardp(me)) {
    me->delete("env/����");
  }

  // ���½���� by swy
  if (!me->query("mblade-new")) {
    me->set("mblade-new",1);
  }

  // meq and godeq ��������Ҫ��һ�� by swy
  if (ob && !me->query("qu-meq")) {
    me->set("qu-meq",1);
    me->delete("meq");
    me->delete("have_mdragon");
    log_file("mblade/meq",sprintf("(%s) �� meq\n",me->query("id")));
  }

  if (ob2 && !me->query("qu-godeq")) {
    me->set("qu-godeq",1);
    log_file("mblade/godeq",sprintf("(%s) �� godeq\n",me->query("id")));
  }

  // ���µ��� set �������¼�鲻�ù� by swy
  if (!me->query("new-by-swy") && me->query("id")!="swy" ) {
    me->delete("clear-meq-godeq");
    me->delete("del-meq-godeq");
    inb = all_inventory(me);
    for (j=0; j<sizeof(inb); j++)
      if (inb[j]->query("id")=="mdragon-eq" || inb[j]->query("id")=="god-eq") {
        log_file ("mblade/clear-eq",
                  sprintf ("(%s)���%s\n", me->query("id"),
                          inb[j]->query("name")));
        destruct(inb[j]);
     }
  }

  if (me->query_temp("have_horse",1)==1) {
    horse = find_living((string)me->query_temp("horse",1));
    if (horse && (horse->query_temp("my_boss",1)==me->query("id",1))) {
      destruct(horse);
    }
  }

  if (me->query("family/family_name")=="����"&&me->query("id")!="swy") {
    me->do_command("enable dodge none");
    me->reset_action();
    me->do_command("enable move none");
    me->reset_action();
  }
  if (me->query("force_factor") > 10)
    me->set("force_factor",10);
  if (me->query("mana_factor") > 10)
    me->set("mana_factor",10);

  //�趨����ʱenforce Ϊ 10 by chan
  if (me->query("powerup_flag")) {
    me->delete("powerup_flag");
    me->set("force_factor" ,10);
  }

  if (me->query_temp("upforce")==1) me->set("force_factor" ,10);
  gift_key = keys(gift);
  if (me->query_temp("spe") == 1)
    SEC_KEE_D(me->query("sec_kee"))->remove_it(me);

  for (i=0; i<sizeof(gift); i++) {
    if( me->query(gift_key[i])>35 ) {
      tell_object(me,"���"+gift[gift_key[i]]+"���ߣ�ϵͳ������Ϊ 35��\n");
      me->set(gift_key[i],35);
    }
  }

  // �Ѷ�����������
  if (!wizardp(me)) {
    inv = all_inventory(me);
    for (i=0; i<sizeof(inv); i++)
      if (!inv[i]->query_autoload() && inv[i]->query("name") != "����")
        DROP_CMD->do_drop(me, inv[i]);
  }

  if( sizeof(me->query_team()) > 0 ) {
    if(me->query_temp("leader"))
      me->query_temp("leader")->dismiss_team();
    write("�������˶�����\n");
    me->dismiss_team();
  }

  // �������ж�: �������switch mob �Ļ�, ��link_ob ����ԭ
  // char���ϡ�������ʹ��ҵ��������ԭ��, �����Ѿ��ĺ���
  //                                       modified by Konn
  //
  if (body_ob = me->query_temp ("body_ob")) {
    link_ob = me->query_temp ("link_ob");
    me->delete_temp ("body_ob");
    exec (link_ob, me);
    exec (body_ob, link_ob);
    body_ob->setup();
    tell_object (me, "��Ļ��ǻص�"+ body_ob->name() +"�����ϡ�\n");
    write ("ok.\n");
    return 1;
  }

  if (wiz && wizardp(this_player(1))) {
    tell_object(me, wiz->name() + "(" + wiz->query("id") + ")ǿ�������ߡ�\n");
    message_vision("$N��$n����һ�۾��뿪��Ϸ�ˡ�\n", me, wiz);
  }

  // by acky
  else {
    me->delete_temp("msg_buffer");
    write( "\n"+
    HIB"  �W�����Z�W�����Z�W���Z�Z�W�i���Z�W�����Z�W�����Z�W    �Z\n"+
    BLU"  �c�����Z�c�����f�U  �U�U  �U    �c�����f�]�����Z�U    �U\n"+
    HIC"  �U      �U    �U�U  �U�U  �U    �U    �U      �U�]���i�`\n"+
    CYN"  �]      �]    �`�]  �]�`  �l    �]    �`�]�����`  ���l  \n"+
    HIB"                                  �W�����Z�W�����r�W�����Z�W�����Z�W�����Z\n"+
    BLU"                                  �]�����Z�U    �U�c�����f�U      �c�����Z\n"+
    HIC"                                        �U�c�����`�U    �U�U      �U      \n"+
    HIC"��"+HIW"��������������������������������"+CYN"�]�����`�]      �]    �`�]�����`�]�����`"+HIW"��"+HIC"��\n");
    write( CYN"\n���������ʵ�����ǣ��, �㽫�ص�ԭ�������硣\n" +
           "ϣ���㲻Ҫ�����Լ���ʹ������������ռ����ǵĳ�ŵ��\n"NOR );
    message_vision ("$N�뿪����ռ��ˡ�\n", me);
  }

  log_file ("quit",
            sprintf("%s(%s)�� %s �뿪��Ϸ��\n������һ�������� '%s'\n",
                    me->query("name"),
                    me->query("id"),
                    ctime(time()),
                    me->query_temp("last_input"))
  );

  // Modify By Spirits. 10.02.1995
  if (wiz_level(me) != 7) {
    CHANNEL_D->do_channel(this_object(), "sys",
      sprintf("%s(%s)���ߡ�", me->query("name"), me->query("id")) );
  }
  me->set("last_on", time());

  if( pal=me->query_temp("pal") ) {
    pal->save();
    destruct(pal);
  }

  me->save();

  destruct(me);
  return 1;
}

int help(object me)
{
        write(@HELP
ָ���ʽ : quit <player>
ָ��˵�� :
           ����(��)���뿪�����ʱ�򣬿����ô�һָ�
           �뿪֮ǰ��ϵͳ���Զ��������Ľ��ȡ�
           ����ʦ�����ǿ��������ߡ�
HELP);
        return 1;
}

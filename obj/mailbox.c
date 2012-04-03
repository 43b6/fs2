// mailbox.c
// Fix ��ʾ����, "from" ����
// by wade@Fantasy.Spaace 87/7/31

#include <ansi.h>

inherit ITEM;
inherit F_SAVE;

mapping *mails;

void get_mail_text(mapping mail, string str);

void create()
{
	set_name("����ҵ��˵����", ({ "mailbox","box" }) );
	set("long",
		"�����������ָ������������ʼ���\n\n"
		"mail <ĳ��>               ���Ÿ����ˡ�\n"
		"forward <�ż����> <ĳ��> ��ĳ����ת�ĸ����ˡ�\n"
		"from                      �鿴�����е��ż���\n"
		"read <�ż����>           ��\��һ���ż���\n"
		"discard <�ż����>        ����һ���ż���\n"
	);
	set("unit", "��");
	set("no_drop", 1);
	set("no_insert", 1);
	setup();
}

int set_owner(string id)
{
	set("owner_id", id);
	return restore();
}

void init()
{
	object ob;

	if( this_player() && environment()==this_player() ) {
		set_owner( getuid(this_player()) );
		this_player()->delete("new_mail");
		this_player()->set_temp("mbox_ob", this_object());
		add_action("do_mail", "mail");
		add_action("do_send", "send");
		add_action("do_sendg", "sendg");
		add_action("do_forward", "forward");
		add_action("do_from", "from");
		add_action("do_read", "read");
		add_action("do_discard", "discard");
        if(wizardp(this_player()))
          add_action("do_trans_file","trans_file");
	}
}

string query_save_file()
{
	string id;

	if( !stringp(id = query("owner_id")) ) return 0;

	return DATA_DIR + "mail/" + id[0..0] + "/" + id;
}

void receive_mail(mapping mail)
{
	if( !pointerp(mails) ) mails = ({ mail });
	else mails += ({ mail });
	save();
}

void send_mail(string rcvr, mapping mail)
{
	object ppl, mbx, body;

	// Get the mailbox or make a new one if not found.
	ppl = find_player(rcvr);
	if( !mbx ) {
		mbx = new(MAILBOX_OB);
		mbx->set_owner(rcvr);
	}

	// Receive the mail and destruct the objects if receiver is off-line.
	mbx->receive_mail(mail);
	if(ppl){
		mbx = ppl->query_temp("mbox_ob");
		write ("�������֪ͨ " + rcvr + " ����!\n");
		tell_object(ppl, GRN"\n������ǧ�ﴫ������˵���������ţ���ȥ���ţ�\n\n"NOR);
	}
	else MAIL_D->send_mail(rcvr);

       if(mbx)
        destruct(mbx);
}

int do_mail(string arg)
{
	mapping mail;

	if( this_player()!=environment() ) return 0;

	if( !arg || arg=="" )
		return notify_fail("��Ҫ���Ÿ�˭��\n");

	mail = ([
		"from":	this_player()->name(1) + "(" + this_player()->query("id") + ")",
		"title": "����",
		"to": arg,
		"time": time(),
		"text": ""
	]);
	write("�ż����⣺");
	input_to("get_mail_title", mail);
	return 1;
}

int do_send(string arg)
{
	object	me=this_player();
	string	file, title;
	mapping mail;

	if( this_player()!=environment() ) return 0;

	if ( !arg || arg=="" || sscanf (arg, "%s %s", file, title) != 2)
		return notify_fail("send <file> <title>\n");

	file = resolve_path(me->query("cwd"), file);
	if (file_size(file) < 0) {
	  write ("����ĵ������ܲ�����, Ҳ����������˰�!\n");
	  return 1;
	}
	mail = ([
		"from":	me->name(1) + "(" + me->query("id") + ")",
		"title": title,
		"time": time(),
		"text": read_file(file),
	]);
	write("�ĸ�˭? ");
	input_to("get_id", mail);
	return 1;
}

int do_sendg(string arg)
{
	object	me=this_player();
	string	file, title, group;
	string	*groups;
	int	i;
	mapping mail;

	if( this_player()!=environment() ) return 0;

	if ( !arg || arg=="" ||
	     sscanf (arg, "%s %s %s", group, file, title) != 3)
		return notify_fail("send <group> <file> <title>  <-- ���� groups �����趨 groups ����.\n");

	file = resolve_path(me->query("cwd"), file);
	if (file_size(file) < 0) {
	  write ("����ĵ������ܲ�����, Ҳ����������˰�!\n");
	  return 1;
	}
	if (!groups=me->query("groups/"+group)) {
	  write ("���޴�Ⱥ��, ���� groups ����������� groups ����.\n");
	  return 1;
	}
	mail = ([
		"from":	me->name(1) + "(" + me->query("id") + ")",
		"title": title,
		"time": time(),
		"text": read_file(file),
	]);

	printf ("��Ҫ�ĸ�������ʿ: %O\n", groups);
	for (i=0; i<sizeof(groups); i++) {
	  mail["to",groups[i]];
          send_mail(groups[i], mail);
	}
	
	return 1;
}

void get_mail_title(string str, mapping mail)
{
	if( str!="" ) mail["title"] = str;
	write("�ż����ݣ�\n");
	this_player()->edit( (: get_mail_text, mail :) );
}

void get_mail_text(mapping mail, string str)
{
	mail["text"] = str;
	write("���Լ�Ҫ��һ�ݱ�����(y/n)��[n]");
	input_to("confirm_copy", mail);
}

void confirm_copy(string yn, mapping mail)
{
	if( yn[0]=='y' || yn[0]=='Y' ) receive_mail(mail);
	send_mail(mail["to"], mail);
	write ("���ʻ���Ҫ�ĸ�˭��(y/n) ? [n]");
	input_to ("confirm_other", mail);
}

void get_id (string str, mapping mail)
{
	if( str!="" ) mail["to"] = str;
        send_mail(str, mail);
	write ("���ʻ���Ҫ�ĸ�˭��(y/n) ? [n]");
	input_to ("confirm_other", mail);
}

void confirm_other(string yn, mapping mail)
{
        if ( yn[0]=='y' || yn[0]=='Y' ) {
	  write ("��һ��һ����������, �������þ�� '.'  : ");
	  input_to("mail_other", mail);
	}
}

void mail_other(string name, mapping mail)
{
	if (name == ".")
	  write ("�żĳ�ȥ��.\n");
	else {
	  mail["to"] = name;
	  send_mail(name, mail);
	  write ("��һ��һ����������, �������þ�� '.'  : ");
	  input_to("mail_other", mail);
	}
}

int do_from()
{
  int i;

  if( !pointerp(mails) || !sizeof(mails) ) {
    write("���������Ŀǰû���κ��ż���\n");
    return 1;
  }

  write ("������������ڹ��� " + sizeof(mails) + " ���ż���\n");
  write ("### ����=========================================================\n");
  for(i=0; i<sizeof(mails); i++) {
    printf("%3d %s\n\t�ļ��ˣ�%s, %s(%d ��)\n",
      i+1,
      mails[i]["title"],
      mails[i]["from"],
      ctime (mails[i]["time"]),
      strlen (mails[i]["text"])
    );
  }
    write("\n");
    return 1;
}

int do_read(string arg)
{
	int num;

	if( !arg || !sscanf(arg, "%d", num) )
		return notify_fail("��Ҫ����һ���ţ�\n");

	if( !pointerp(mails) || num < 1 || num > sizeof(mails) )
		return notify_fail("û�������ŵ��ż���\n");

	num --;

    this_player()->start_more(sprintf("�ż����⣺%s\n�� �� �ˣ�%s\n\n%s\n",
        mails[num]["title"], mails[num]["from"], mails[num]["text"] ));

	return 1;
}

int do_discard(string arg)
{
	int num;

	if( !arg || !sscanf(arg, "%d", num) )
		return notify_fail("��Ҫ������һ���ţ�\n");

	if( !pointerp(mails) || num > sizeof(mails) )
		return notify_fail("û�������ŵ��ż���\n");

	num --;

	mails = mails[0..num-1] + mails[num+1..sizeof(mails)-1];
	save();
	write("Ok.\n");

	return 1;
}

int do_forward(string arg)
{
	string dest;
	int num;
	mapping m;

	if( !arg || sscanf(arg, "%d %s", num, dest)!=2 )
		return notify_fail("��Ҫ����һ����ת�ĸ����ˣ�\n");

	if( !pointerp(mails) || num > sizeof(mails) )
		return notify_fail("û�������ŵ��ż���\n");

	num --;

	m = ([]);
	m["title"] = mails[num]["title"];
	m["text"] = mails[num]["text"];
	m["time"] = mails[num]["time"];
	m["from"] = mails[num]["from"] + "/ת����" + this_player()->query("name");
	m["to"] = dest;
	send_mail( dest, m );
	write("Ok.\n");

	return 1;
}

void owner_is_killed() { destruct(this_object()); }
int do_trans_file(string arg)
{
    int num;
    string file_name,out,temp;
    object me=this_player();

    if(!arg) 
      return notify_fail("ָ���ʽ:trans_file �ŵ�ƪ�� ����\n");
    if(sscanf(arg,"%d %s",num,file_name)!=2)
      return notify_fail("ָ���ʽ:trans_file �ŵ�ƪ�� ����\n");
    if( !pointerp(mails) || num < 1 || num > sizeof(mails) )
      return notify_fail("û�������ŵ��ż���\n");
    num--;
    file_name= resolve_path(me->query("cwd"), file_name);
    if(file_size(file_name) >0)
      return notify_fail("�����Ѿ�����, �����һ���µ�!!\n");
    out="";
    out=sprintf("�ż����⣺%s\n�� �� �ˣ�%s\n\n%s\n",
        mails[num]["title"], mails[num]["from"], mails[num]["text"] );
    if(write_file(file_name,out))
      return notify_fail("�� "+sprintf("%d",num+1)+" ƪ:"+mails[num]["title"]
                          +"д��"+file_name+"�ɹ�!!\n");
    else
      return notify_fail("�޷�д�뵵��!!\n");
}
    



   

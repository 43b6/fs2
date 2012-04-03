#include <ansi.h>
 
// ȡ�õ�һ�����ŵ�λ��
int parse (string arg)
{
  int  i, k;
  int n;

  i = 0; k = 0; n = strlen (arg);
  arg += ",";   // �����ſ����� ,, ���ж�����

  for (i=0; i<n; i++) {
    if (arg[i] == '"')
        if (arg[i+1] == '"') {
          i++;
          continue;
        }
        else k = !k;
    else if (arg[i] != ',') continue;
    else if (k) continue;
    else if (arg[i+1] == ',')
        i++;
    else break;
  }

  return i-1;
}

// �����հײ���, ʹ�� "l,hp", "l, hp" �� "l,     hp" ��������
int skip_space(string arg)
{
  int           i, n;

  i = 0; 
  n = strlen (arg);

  while ( i<n && arg[i] == ' ') i++;
  return i;
}

// ����������Ԫ, ������˫����, �Լ�����������ʵֻ��һ�����Ŷ���
string discard (string arg)
{
  string msg;
  int   i, n;

  if (!arg || arg == "") return arg;
  n = strlen(arg);
  arg += ",";   // �����ɸ� parse() ���һ��
  msg = "";
  for (i=0; i<n; i++)
    if ((arg[i] == ',' && arg[i+1] == ',') ||
        (arg[i] == '"' && arg[i+1] == '"'))
    {
        i++;
        msg += arg[i..i];
    }
    else if (arg[i] == '"') continue;
    else msg += arg[i..i];
  return msg;
}

int main(object me, string cmds, int depth, int in_do)
{
  string        cmd, other;
  int           i, j, n;

  // if(!wizardp(me) && !me->query("use_do")) return 0;
  if (!cmds || cmds == "") return 0;
  if(me->is_busy()) return 0;
 // ���ʮ���� by bss
 if (depth >= 19) return 0;

  // ȡ����һ������λ��
  if (cmds == "") return 1;
  i = parse(cmds);
  if (i == -1) return 0;
  j = skip_space(cmds);
  if (i<j) return 0;
  // ˳�㱣����������
  cmd = cmds[j..i];
  if ((i+2) < (n=strlen(cmds))) other = cmds[i+2..n-1];
  cmd = discard(cmd);
 
  // ��ʱ cmd �Ѿ��� do �������, ���ǲ����� do �ﻹ�� do
  if( cmd[0..1] == "do") return 0;

  // Ӳ�Թ涨�� do ��ͷ��һ���� brief mode
  if (!in_do) {
		n = me->query_temp("brief_mode");
		me->set_temp("brief_mode",1);
	}

  // ÿ������������ alias, ��������ȥ alias.c ��� process_input �����
  // Ȼ�����ͽ� /feature/commamd.c ����
	me->do_command( me->process_input(cmd) );

  if ( other && other != "" )
    // ���Ĳ��� 1 ������ do ������, ����Ϊ�� brief mode �õ�
    // call_other(this_object(),"main", me, other, depth+1, 1);
	if( me ) // ����п�����̫��ָ��߳�ȥ, Ҫ���	arthur
    main (me, other, depth+1, 1);
	else return 1;

  // �� brief mode ��ԭ
  if(me)
  me->set_temp("brief_mode",n);
  return 1;
}
 
int help(object me)
{
        write(@HELP
ָ���ʽ : do
ָ��˵�� :
           ���ָ����������Ը�����ķ�ʽ�����
     1.  do: ������� do ��һ���¶����������:
           do e,e,e,s,e,n,e
     2.  ������� 10 e ��������ʮ�� e
           4 e �� do e,e,e,e ��һ������˼
     3.  �������ֻ���˵������ channel ���ж���ʱ��������
           do 'hello, wade, smile
         ���֮������˫���ţ�����˫����
           do '"hello, wade",smile
           do 'hello,, wade, smile
     4.  ���Ҫ�õ�˫���ţ��ⷨ��������������˫���ţ�
         Ʃ����Ҫ˵ "��" �������:
           do '""��"" �Ǵ󱿵�,giggle
     5.  ִ����һ����: ��ֱ���� !
         �����̾�ź����ж���, ��ӽ�ȥ, ������ԭ����:
           smile           <-- ��������Ӧ�üӸ����� wade
           ! wade          <-- ���� smile wade
         ע��ร���һ����̾���
     6.  �޸�, ������ԭ����� smile ȴ��С�Ĵ�� smille
           ^ll^l           <-- ������ ll �ĳ� l
�����ο� :
           tune��alias��semote
HELP
    );
    return 1;
}

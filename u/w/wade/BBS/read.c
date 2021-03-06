// read.c
//
// 以存档的方式重新实作
// 大部份功能都做在 /player/BBS.c 中。
// wade@Fantasy.Space 12/16/1999
#include <BBS.h>

int help();

int main(object me, string r)
{
  object	BBS;
  string	board;
  int		n;	// 想要查看第 n 封

  if (!r) return help();
  if (!stringp (board = me->query ("post/board"))) {
    write ("请用 select 选择想看的版面，再用本命令看布告！\n");
    return 1;
  }
  if (!objectp (BBS = find_object (BBS_OBJ))) {
    write ("BBS 系统还没建立，请通知巫师查看！\n");
    return 1;
  }
  sscanf (r, "%d", n);
  if (n<0 || n>=BBS->nol(board)) {
    write ("范围不对！请用 list 命令查看之后再读布告！\n");
    return 1;
  }
  me->set("post/"+board, BBS->query_time (board, n));
  return BBS->read_list (board, n);
}

int help()
{
  write(@HELP
指令格式 : read #
指令说明 :
	用来读第 # 封布告，请参考 list, post, discard 等命令。
HELP
    );
    return 1;
}

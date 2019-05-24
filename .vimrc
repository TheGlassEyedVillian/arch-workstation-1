syntax on
set number relativenumber

"if empty(glob('~/.vim/autoload/plug.vim'))
"  silent !curl -fLo ~/.vim/autoload/plug.vim --create-dirs
"    \ https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim
"  autocmd VimEnter * PlugInstall --sync | source $MYVIMRC
"endif

call plug#begin('~/.vim/plugged')
Plug 'junegunn/goyo.vim'
Plug 'arcticicestudio/nord-vim'
Plug 'PotatoesMaster/i3-vim-syntax'

call plug#end()

colorscheme nord

autocmd BufWritePost *.c !gcc %

autocmd BufWritePost ~/.Xresources,~/.Xdefaults !xrdb %

autocmd BufWritePost ~/.config/i3/config !i3-msg restart

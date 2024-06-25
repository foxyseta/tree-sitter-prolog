c:- % Hello!
    % <- comment
% <- constant
{
% <- puncutation.bracket
  [
  % <- puncutation.bracket
    {
    % <- puncutation.bracket
      true,
      % <- atom
      %   ^ operator
      4,
      % <- number
      %   ^ operator
      cat,
      % <- atom
      %   ^ operator
      -0.5e-2,
      % <- number
      %   ^ operator
      log
      % <- atom
      %   ^ operator
    }
    % <- punctuation.bracket
  ]
  % <- punctuation.bracket
}. /* Hi
         there! */
      % ^ comment

function(a,c,a,b,c).
% <- function
%       ^ punctuation.bracket
%        ^ constant
%         ^ operator
%                 ^ punctuation.bracket
%                  ^ punctuation.delimiter

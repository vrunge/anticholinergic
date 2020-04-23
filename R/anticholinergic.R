##  GPL-3 License
## Copyright (c) 2020 Vincent Runge

#' Anticholinergic
#'
#' @description Anticholinergic data analysis
#' @param df dataframe of size n x p
#' @return an anticho object
anticholinergic <- function(df = data.frame())
{
  response <- anticholinergicTransfer(df)

  attr(response, "class") <- "anticho"
  return(response)
}
